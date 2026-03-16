//制定学生信息
#include <stdio.h>
int main()
{
    setbuf(stdout,NULL);
    unsigned long money;
    unsigned int income;
    unsigned char citizen ;
    float no1,no2,no3;
    printf("input the family year's income:");
    scanf(" %d",&money);
    printf("input the family's month,day income(mmmm-dddd):");
    scanf("%d,%d",&income,&income);
    fflush(stdin);
    printf("nationality(t/f):");
    scanf("%c",&citizen);
    printf("family's name:");
    scanf("%f,%f,%f",&no1,&no2,&no3);
    printf("\n====money=i n c o m e====nationality==no1==no2==no3\n");
    printf("%d %d %d %d %c  %f  %f  %f  %f\n",money,income,income,citizen);
}
