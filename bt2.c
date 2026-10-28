#include <stdio.h>

int main() 
{
    int n, i;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    printf("Cac so chan tu 1 den %d la:\n", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Cac so l? tu 1 den %d la:\n", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

