#include "stdio.h"
void main(){
    setbuf(stdout,NULL);
    int x;
    printf("-------------ATM取款系统-------------\n");
    printf("|  1.search money  2.take money    |\n");
    printf("|  3.save money    4.change money. |\n");
    printf("|  5.print list    6.out card      |\n");
    printf("------------------------------------\n");
    printf("请选择要办理的业务：\n");
    scanf("%d",&x);
    switch (x) {
        case 1:
            printf(" your choice is search money.");
            break;
        case 2:
            printf(" your choice is take money.");
            break;
        case 3 :
            printf(" your choice is save money.");
            break;
        case 4:
            printf(" your choice is change money.");
            break;
        case 5:
            printf(" your choice is print list.");
            break;
        case 6:
            printf(" your choice is out card.");
            break;
        default:
            printf(" your choice is false. ");
    }
}