//n个选手参赛（，有m个评委打分，最高10，最低0，要求去掉最高分去掉最低分，求平均分然后排名次
#include "stdio.h"
int main(){
    int i,j,n,t,m,xs[40];
    float max ,min,dt,po[40],pw[40][20];
    printf("input po nums:");
    scanf("%d",&n);
    printf("input pw nums:");
    scanf("%d",&m);
    for (int i = 1; i <=n ; ++i) {
        printf("input %d 选手，%d评委打分:",xs[i]);
        scanf("%d",&xs[i]);
        po[i]= 0;
        max = 0;
        min = 10;
        for (int j = 1; j <=m; ++j) {
            printf("input %d选手，%d评委的打分",xs[i],j);
            scanf("%f",&pw[i][j]);
            po[i]+=pw[i][j];
            if(min>pw[i][j]) min = pw[i][j];
            if(max <pw[i][j] ) max = pw[i][j];
        }
        printf("去掉最高分%.2f，去掉最低分%.2f\n",max,min);
        po[i] = (po[i]-max-min)/(m-2);
        printf("平均分.2f\n",xs[i],po[i]);
        for (int i = 1; i <= n; ++i) {
                printf("得分 =%2d",pw[i][j]);
        }
    }
    for (int i = 1; i <= n-1; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            dt = po[j];
            po[j] = po[j + 1];
            po[j + 1] = dt;
            t = xs[j];
            xs[j] = xs[j + 1];
            xs[j + 1] = t;
        }
    }
    printf("\n编号  得分  名次");
    for (int i = 1; i <= n; ++i) {
        printf("/n%-8d %-4.2f %2d",xs[i],po[i]);
    }
    printf("\n");
    return 0;
}
