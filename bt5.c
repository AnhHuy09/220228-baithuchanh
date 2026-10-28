#include <stdio.h>

int main() {
    int n;
    int i;
    long long tong = 0;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            tong += i;
        }
    }
    
    printf("Tong cac so le tu 0 den %d la: %lld\n", n, tong);
    return 0;
}

