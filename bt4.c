#include <stdio.h>
int main()
{
    int n, i;
    long long tong = 0;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong lon hon 0!\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        tong = tong + i;
    }
    printf("Tong S = 1 + 2 + ... + %d la: %lld\n", n, tong);

    return 0;
}

