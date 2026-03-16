//#include <stdio.h>
//int main() {
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    for (int i = size - 1; i >= 0; i--) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}



#include <stdio.h>

int main() {
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);

    while (num > 0) {
        printf("%d", num % 10);
        num /= 10;
    }

    return 0;
}