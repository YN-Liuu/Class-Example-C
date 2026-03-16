#include <stdio.h>
void main() {
    setbuf(stdout,NULL);
    float score;
    printf("input a num:");
    scanf("%f",&score);
    if (score > 100||score<0) {
        printf("成绩输入有误!\n");
    }
    else if (score >=90){
        printf("成绩优秀\n");
    }
    else if (score>=80){
        printf("成绩良好\n");
    }
    else if (score>=70){
        printf("成绩中等\n");
    }
    else if(score>=60){
        printf("成绩合格\n");
    }
    else
        printf("成绩不合格\n");
}