#include "stdio.h"
void main() {
    setbuf(stdout, NULL);
    int a;
    printf("output one word : \n");
    scanf("%d", &a);
    switch(a){
        case1:
            printf("monday\n");
            break;
        case2:
            printf("Tuesday\n");
            break;
        case3:
            printf("Wednesday\n");
            break;
        case4:
            printf("Thursday\n");
            break;
        case5:
            printf("Friday\n");
            break;
        case6:
            printf("Saturday\n");
            break;
        case7:
            printf("Sunday\n");
            break;
        default:
            printf("error\n");
            break;
    }
}