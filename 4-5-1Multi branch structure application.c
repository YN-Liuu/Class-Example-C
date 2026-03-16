#include <stdio.h>
#include <math.h>
void main() {
    char c;
    printf("input a character:");
    c = getchar();
    if (c < 32) {
        printf("this is control character\n");
    } else if (c >= '0' && c <= '9')
        printf("this is a digit\n");
    else if (c >= 'A' && c <= 'Z')
        printf("this is a capital letter\n");
    else if (c >= 'a' && c <= 'z') {
        printf("this is a small letter\n");
    } else printf("this is other character\n");
}