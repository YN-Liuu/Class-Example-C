#include "stdio.h"
void main(){
    FILE *fp;
    char ch;
    if((fp = fopen("/Users/Zhuanz/Desktop/kkk.txt","wt+"))==NULL)
    {
        printf("dont open,find flase");
    }
    printf("input a string :\n");
    ch = getchar();
    while (ch!='\n'){
        fputc(ch,fp);
        ch = getchar();
    }
    rewind(fp);
    ch = fgetc(fp);
    while(ch!=EOF){
        putchar(ch);
        ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);
}