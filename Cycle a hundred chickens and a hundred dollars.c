//百钱问题,公鸡5钱，母鸡3钱，小鸡3只1钱,问100钱可以分别买多少只公鸡母鸡和小鸡
#include "stdio.h"
void main(){
    int x,y,z;
//    for (int x = 1; x <=19; ++x) {
//        for (int y = 1; y <=33 ; ++y) {
//            for (int z = 1; z <=100 ; ++z) {
//                if(z%3==0&&x+y+z==100&&5*x+3*y+z/3==100)
//                    printf("x=%d ,y= %d ,z = %d\n",x,y,z);
//            }
//        }
//    }
//
    for (int x = 1; x <=19; ++x) {
        for (int z = 3; z <=99 ; z+=3) {
            y = 100-x-z;
            if(y>0&&5*x+3*y+z/3==100){
                printf("gongji:%d ,muji:%d ,xiaoji=%d \n",x,y,z);
            }
        }
    }
}