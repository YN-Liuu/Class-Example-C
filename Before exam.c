//200以内能被3，5整除，打出结果，每5个换行
#include "stdio.h"
int main(){
    int count=0;
    for (int i = 1; i <200 ; ++i) {
        if(i%3==0&&i%5==0){
            printf("%d",i);
            count++;
            if(count%5==0){
                printf("\n");
            }
        }
    }
    return 0;
}
//九九乘法比表
#include "stdio.h"
int main(){
    int i,j;
    for (int i = 1; i <=9; ++i) {
        for (int j = 1; j <=i ; ++j) {
            printf("%d*%d = %2d\t",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}

//浮点型加减乘除
//分段函数

#include "stdio.h"
int main(){
    float x,y;
    printf("input x:\n");
    scanf("%f",&x);
    if(x<1){
        y = x;
    }else if(x<10){
        y = 2*x-1;
    }else{
        y = 3*x-11;
        printf("%.2f",y);
    }
    return 0;
}
//逆序输出
#include "stdio.h"
int main(){
    int num;
    printf("input a num:\n");
    scanf("%d",&num);
    while(num>0){
        printf("%d",num%10);
        num/=10;
    }
    return 0;
}

//水仙花
#include "stdio.h"
int main(){
    int i ,x,y,z;
    printf("three nums:\n");
    for (int i = 100; i <999 ; ++i) {
        x= i%10;
        y = i%100/10;
        z = i/100;
    }if(x*x*x+y*y*y+z*z*z==i){
        printf("%d\t",i);
    }
    return 0;
}
//完全数
////逆序输出
//#include "stdio.h"
//int main(){
//    int num;
//    printf("please a five nums:\n");
//    scanf("%d",&num);
//    while (num>0){
//        printf("%d",num%10);
//        num/= 10;
//    }
//    return 0;
//}

//回文数
//#include "stdio.h"
//int main(){
//    int num;
//    printf("please input num:\n");
//    scanf("%d",&num);
//    int div[5];
//    int temp = num;
//    for (int i = 1; i <=4 ; --i) {
//        div[i]=temp%10;
//        temp/=10;
//    }if(div[1]==div[3]&&div[0]==div[4]){
//        printf("是回文数%d\n")
//    }else{
//        printf("不是回文数\n");
//    }
//    return 0;
//}

#include "stdio.h"
int main(){
    int a[5],sum = 0,max = 0;
    printf("input 5 nums:\n");
    float average;
    for (int i = 0; i < 5; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <5 ; ++i) {
        max = a[i];
        sum+=a[i];
    }
    average=sum*1.0/5;
    printf("max = %d\naverage = %f\n",max,average);
    return 0;
}



//小于等于输入的n的所有完全数
//#include "stdio.h"
//void judge(int n){
//    for (int i = 1; i <=n ; ++i) {
//        int sum = 0;
//        for (int j = 1; j <i ; ++j) {
//            if(i%j==0){
//                sum+=j;
//            }
//        }
//        if(sum==i){
//            printf("%d\n",i);
//        }
//    }
//    printf("\n");
//}
//
//int main(){
//    int n;
//    printf("please input n:\n");
//    scanf("%d",&n);
//    if(n<0){
//        printf("false\n");
//    }else{
//        printf("%d以内的的完全数有:\n",n);
//        judge(n);
//    }
//    return 0;
//}

//输入两个数，出现所有因子
//#include "stdio.h"
//void judge(int x,int y){
//    for (int i = x; i <=y ; ++i) {
//        printf("input false\n");
//        for (int j = 1; j <i ; ++j) {
//            if(i%j==0){
//                printf("%d",j);
//            }
//        }
//        printf("\n");
//    }
//    printf("\n");
//}
//
//int main(){
//    int x;
//    int y;
//    printf("please two numS:\n");
//    scanf("%d %d",&x,&y):
//    if(x<y){
//        printf("input false\n");
//    }else{
//        judge(x,y);
//    }
//    return 0;
//}

#include "stdio.h"
void judge(int n){
int
}