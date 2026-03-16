#include <stdio.h>  // 标准输入输出库，用于基本的输入输出操作
#include <stdlib.h> // 标准库，包含一些常用的函数，如内存分配、随机数生成等
#include <unistd.h> // 提供了对 POSIX 操作系统 API 的访问，这里可能用于延时等操作
#include <curses.h> // ncurses 库，用于创建基于文本终端的交互式界面
#include <time.h>   // 时间库，用于获取当前时间，通常用于随机数种子

#define WIDTH 30    // 定义游戏窗口的宽度
#define HEIGHT 20   // 定义游戏窗口的高度
#define DELAY 100000 // 定义游戏的延时时间，单位是微秒

// 定义一个结构体 Point，用于表示二维平面上的一个点
typedef struct {
    int x, y;  // x 和 y 坐标
} Point;

// 定义一个结构体 Snake，用于表示贪吃蛇
typedef struct {
    Point body[WIDTH * HEIGHT];  // 存储蛇身体每个部分的坐标，最多能容纳 WIDTH * HEIGHT 个部分
    int size;  // 蛇的当前长度
    int direction;  // 蛇的移动方向
} Snake;

// 定义一个结构体 Food，用于表示食物
typedef struct {
    Point pos;  // 食物的坐标
} Food;

// 初始化屏幕，设置 ncurses 库的各种参数
void init_screen() {
    initscr();  // 初始化 ncurses 库，进入 curses 模式
    cbreak();   // 禁用行缓冲，使得字符输入立即被程序接收
    noecho();   // 禁用字符回显，输入的字符不会显示在屏幕上
    curs_set(0); // 隐藏光标
    keypad(stdscr, TRUE); // 启用功能键（如方向键）的输入
    timeout(DELAY); // 设置 getch() 函数的超时时间，单位是毫秒
}

// 初始化蛇的初始状态
void init_snake(Snake *snake) {
    snake->size = 3;  // 蛇的初始长度为 3
    snake->direction = KEY_RIGHT;  // 蛇的初始移动方向为右
    for (int i = 0; i < snake->size; i++) {
        // 初始化蛇身体每个部分的坐标，蛇头在中间，身体依次向左排列
        snake->body[i].x = WIDTH / 2 - i;
        snake->body[i].y = HEIGHT / 2;
    }
}

// 初始化食物的位置
void init_food(Food *food) {
    srand(time(NULL));  // 使用当前时间作为随机数种子，确保每次运行游戏时食物的位置不同
    // 随机生成食物的 x 坐标，范围是 1 到 WIDTH - 2
    food->pos.x = rand() % (WIDTH - 2) + 1;
    // 随机生成食物的 y 坐标，范围是 1 到 HEIGHT - 2
    food->pos.y = rand() % (HEIGHT - 2) + 1;
}

// 绘制游戏窗口的边界
void draw_border() {
    for (int i = 0; i < WIDTH; i++) {
        // 在第一行和最后一行绘制水平边界
        mvaddch(0, i, '#');
        mvaddch(HEIGHT - 1, i, '#');
    }
    for (int i = 0; i < HEIGHT; i++) {
        // 在第一列和最后一列绘制垂直边界
        mvaddch(i, 0, '#');
        mvaddch(i, WIDTH - 1, '#');
    }
}

// 绘制蛇的身体
void draw_snake(Snake *snake) {
    for (int i = 0; i < snake->size; i++) {
        // 在蛇身体每个部分的坐标处绘制字符 'O'
        mvaddch(snake->body[i].y, snake->body[i].x, 'O');
    }
}

// 绘制食物
void draw_food(Food *food) {
    // 在食物的坐标处绘制字符 'X'
    mvaddch(food->pos.y, food->pos.x, 'X');
}

// 移动蛇的身体
void move_snake(Snake *snake) {
    for (int i = snake->size - 1; i > 0; i--) {
        // 将蛇身体每个部分的坐标更新为前一个部分的坐标
        snake->body[i] = snake->body[i - 1];
    }
    switch (snake->direction) {
        case KEY_UP:
            // 如果蛇的方向是向上，蛇头的 y 坐标减 1
            snake->body[0].y--;
            break;
        case KEY_DOWN:
            // 如果蛇的方向是向下，蛇头的 y 坐标加 1
            snake->body[0].y++;
            break;
        case KEY_LEFT:
            // 如果蛇的方向是向左，蛇头的 x 坐标减 1
            snake->body[0].x--;
            break;
        case KEY_RIGHT:
            // 如果蛇的方向是向右，蛇头的 x 坐标加 1
            snake->body[0].x++;
            break;
    }
}

// 检查蛇是否吃到了食物
int check_food(Snake *snake, Food *food) {
    if (snake->body[0].x == food->pos.x && snake->body[0].y == food->pos.y) {
        // 如果蛇头的坐标和食物的坐标相同，说明蛇吃到了食物
        snake->size++;  // 蛇的长度加 1
        init_food(food); // 重新生成一个新的食物
        return 1;  // 返回 1 表示吃到了食物
    }
    return 0;  // 返回 0 表示没有吃到食物
}

// 检查蛇是否撞到了边界或自己的身体
int check_collision(Snake *snake) {
    if (snake->body[0].x <= 0 || snake->body[0].x >= WIDTH - 1 ||
        snake->body[0].y <= 0 || snake->body[0].y >= HEIGHT - 1) {
        // 如果蛇头的坐标超出了边界，说明蛇撞到了边界
        return 1;  // 返回 1 表示发生了碰撞
    }
    for (int i = 1; i < snake->size; i++) {
        if (snake->body[0].x == snake->body[i].x && snake->body[0].y == snake->body[i].y) {
            // 如果蛇头的坐标和蛇身体其他部分的坐标相同，说明蛇撞到了自己
            return 1;  // 返回 1 表示发生了碰撞
        }
    }
    return 0;  // 返回 0 表示没有发生碰撞
}

// 主函数，程序的入口点
int main() {
    Snake snake;  // 定义一个 Snake 类型的变量 snake
    Food food;    // 定义一个 Food 类型的变量 food

    init_screen();  // 初始化屏幕
    init_snake(&snake);  // 初始化蛇的状态
    init_food(&food);  // 初始化食物的位置

    int ch;  // 用于存储用户输入的字符
    while (1) {  // 无限循环，直到游戏结束
        clear();  // 清屏，清除屏幕上的所有内容
        draw_border();  // 绘制游戏窗口的边界
        draw_snake(&snake);  // 绘制蛇的身体
        draw_food(&food);  // 绘制食物
        refresh();  // 刷新屏幕，将之前绘制的内容显示出来

        ch = getch();  // 获取用户输入的字符
        switch (ch) {
            case KEY_UP:
                // 如果用户按下向上箭头键，并且蛇当前的方向不是向下，则将蛇的方向设置为向上
                if (snake.direction != KEY_DOWN) snake.direction = KEY_UP;
                break;
            case KEY_DOWN:
                // 如果用户按下向下箭头键，并且蛇当前的方向不是向上，则将蛇的方向设置为向下
                if (snake.direction != KEY_UP) snake.direction = KEY_DOWN;
                break;
            case KEY_LEFT:
                // 如果用户按下向左箭头键，并且蛇当前的方向不是向右，则将蛇的方向设置为向左
                if (snake.direction != KEY_RIGHT) snake.direction = KEY_LEFT;
                break;
            case KEY_RIGHT:
                // 如果用户按下向右箭头键，并且蛇当前的方向不是向左，则将蛇的方向设置为向右
                if (snake.direction != KEY_LEFT) snake.direction = KEY_RIGHT;
                break;
            case 'q':
                // 如果用户按下 'q' 键，退出 ncurses 模式，结束程序
                endwin();
                return 0;
        }

        move_snake(&snake);  // 移动蛇的身体
        check_food(&snake, &food);  // 检查蛇是否吃到了食物
        if (check_collision(&snake)) {
            // 如果蛇发生了碰撞，退出 ncurses 模式，输出游戏结束信息，结束程序
            endwin();
            printf("Game Over!\n");
            return 0;
        }
    }

    return 0;  // 程序正常结束
}