#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "curses.h"
#include "time.h"
#define width 30
#define height 20
#define delay 100000
typedef struct{
    int x,y;
}point;
typedef struct{
    point body[width*height];
    int size;
    int direction;
}Snake;
typedef struct {
    point pos;
}food;
void init_screen(){
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    keypad(stdscr,true);
    timeout(delay);
}

void init_snake(Snake*snake){
    snake->size = 3;
    snake->direction = KEY_RIGHT;
    for (int i = 0; i < snake->size; ++i) {
        snake->body[i].x = width/2 - i;
        snake->body[i].y = height/2;
    }
}