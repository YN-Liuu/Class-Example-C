//成绩是否合格
//#include <stdio.h>
//void main()
//{
//    setbuf(stdout,NULL);
//    float x;
//    printf("请输入c语言成绩：");
//    scanf("%f",&x);
//    if(x>=60&&x<=100)
//    printf("c语言成绩合格");
//    if(x>=0&&x<60)
//    printf("c语言成绩不合格");
//    if(x>100||x<0)
//    printf("输入的成绩有误，再来一遍");
//
//}

////两个数求最大值
//#include <stdio.h>
//void main() {
//    setbuf(stdout, NULL);
//    int a, b;
//    printf("请输入2个整数：");
//    scanf("%d,%d", &a, &b);
//    if (b > a)
//        a = b;
//    printf("max = %d\n", a);
//}

//三个数求最小值
//#include <stdio.h>
//void main() {
//    setbuf(stdout, NULL);
//    int a, b,c,min;
//    printf("请输入3个整数：");
//    scanf("%d,%d,%d", &a,&b,&c);
//    if (a > min)
//        min = a;
//    if(b > min)
//        min = b;
//    if(c > min)
//        min = c;
//    printf("min = %d\n",a,b,c);
//}

////输入四个数比大小程序
//#include <stdio.h>
//void main()
//{
//    setbuf(stdout,NULL);
//    int a,b,c,d,t;
//    printf("input some numbers:");
//    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
//    if(a>b){
//        t = a;
//        a = b;
//        b = t;
//    }
//    if(a>c){
//        t = a;
//        a = c;
//        c = t;
//    }
//    if(a>d){
//        t = a;
//        a = d;
//        d = t;
//    }
//    if(b>c){
//        t = b;
//        b = c;
//        c = t;
//    }
//    if(b>d){
//        t = b;
//        b = d;
//        d = t;
//    }
//    if(c>d){
//        t = c;
//        c = d;
//        d = t;
//    }
//    printf("answer = %d,%d,%d,%d\n",a,b,c,d);
//}