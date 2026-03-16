//200以内能被3，5整除，打出结果，每5个换行
#include "stdio.h"
int main(){
    setbuf(stdout,NULL);
    int count =0;

    for (int i = 1; i < 200;++i) {
        if(i%3==0&&i%5==0){
            printf("%5d\n",i);
            count++;
            if(count%5==0)
                printf("\n");
        }
    }
    return 0;
}