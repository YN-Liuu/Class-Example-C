#include "stdio.h"
void main(){
    setbuf(stdout,NULL);
    struct stu
    {
        int num;
        char *name;
        char sex;
        float score;
    }boy1,boy2;
    boy1.num = 102;
    boy1.name = "yao yao";
    printf("input sex and score\n:");
    scanf("%c %f",&boy1.sex,&boy1.score);
    boy2 = boy1;
    printf("number = %d\nname = %s\n",boy2.num,boy2.name);
    printf("sex = %c\nscore = %f\n",boy2.sex,boy2.score);

}