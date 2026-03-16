#include "string.h"
#include "stdio.h"
int main(){
    setbuf(stdout,NULL);
    static char st1[30]= "welcome!";
    char str2[10];
    printf("input your name: \n");
    gets(str2);
    strcat(st1,str2);
    puts(st1);
//    char str3[15],st4[]="little pig";
//    strcpy(str3,st4);
//    puts(str3);
//    printf("\n");
//    int k;
//    static char st[]= "python";
//    k = strlen(st);
//    printf("the length of the string is %d\n",k);
}