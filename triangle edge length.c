////三角形三边长能否构成三角形
#include <stdio.h>
#include <math.h>
void main()
{
    setbuf(stdout,NULL);
    float a,b,c,s,area;
    printf("input 3 length: ");
    scanf("%f,%f,%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        s=1.0/2*(a+b+c);
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("a=%7.2f,b=%7.2f,c=%7.2f\n");
        printf("area =%7.2f\n",area);
        printf("可以构成三角形\n");
    }
    else {
        printf("不能构成三角形\n");
    }
}