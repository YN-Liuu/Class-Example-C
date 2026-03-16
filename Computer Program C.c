#include <stdio.h>
void main(){
    setbuf(stdout,NULL);
    float a,b;
    char c;
    printf("input expression:a(+,-,*,/)b\n");
    scanf("%f%c%f",&a,&c,&b);
    switch (c) {
        case '+':printf("%f\n",a+b);break;
        case '-':printf("%f\n",a-b);break;
        case '*':printf("%f\n",a*b);break;
        case '/':printf("%f\n",a/b);break;
        default:printf("input error\n");
}
}