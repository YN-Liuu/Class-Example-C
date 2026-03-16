//无参数无返回值
//#include "stdio.h"
//void print_x(){
//    printf("|---welcome use student exam manager system----|\n");
//    printf("|----- I agree：exam honest,no see,no copy-----|\n");
//    printf("|----------------------------------------------|\n");
//};
//void main(){
//    print_x();
//}


////无参数有返回值
//#include "stdio.h"
//int x_num()
//{
//int max,a,b;
//    printf("please input two words:\n");
//    scanf("%d,%d",&a,&b);
//    max = a;
//    if (b>max){
//        max = b;
//        return max;
//    }
//}
//void main()
//{
//    int max;
//    max = x_num();
//    printf("max = %d",max);
//}


//有参数无返回值
//#include "stdio.h"
//int max_num(int a,int b){
//    int max;
//    max = a;
//    if(b>max){
//        b = max ;
//        printf("out put max = %d",max);
//    }
//}
//
//void main(){
//    setbuf(stdout,NULL);
//    int x ,y ;
//    printf("input twice nums:");
//    scanf("%d,%d",&x,&y);
//    max_num(x,y);
//}


//有参数有返回值
//#include "stdio.h"
//int max_num(int x,int y){
//    int max;
//    max = x;
//    if(x<y){
//        max = y;
//        return max;
//    }
//}
//
//void main()
//{
//    setbuf(stdout,NULL);
//    int x,y,max;
//    printf("please output twice nums");
//    scanf("%d,%d",&x,&y);
//    max = max_num(x,y);
//    printf("max = %d",max);

//}


//4444 simply
//#include "stdio.h"
//int max_num(int x ,int y) {
////if(x>y){
////return x;
////}
////else{
////return y;
////}
////}
//    return (x > y ? x : y);//三步运算符
//}
//void main(){
//    setbuf(stdout,NULL);
//    int x, y,max;
//    printf("please output twice nums");
//    scanf("%d,%d",&x,&y);
//    max = max_num(x,y);
//    printf("max = %d",max);
//}


//111 rewrite
#include "stdio.h"
void min_num(){
    setbuf(stdout,NULL);
    int a,b;
    printf("please input twice num");
    scanf("%d,%d",&a,&b);
    if(a>b){
        printf("min = %d",a);
    }
    else{
        printf("min = %d",b);
    }
}
void main(){
    min_num();
}

