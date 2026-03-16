#include <stdio.h>
void main(){
    setbuf(stdout,NULL);
    int a;
    printf("input test point: \n");
    scanf("%d",&a);
    if (a>100||a<0){
        printf("错误！");
    }else{
        switch (a) {
            case 10:
            case 9 :
                printf("成绩优秀\n");
                break;
            case 8:
                printf("成绩良好\n");
                break;
            case 7:
                printf("成绩中等\n");
                break;
            case 6:
                printf("成绩及格\n");
                break;
            default:
                printf("成绩不及格\n");
        }
    }
}