#include <stdio.h>

int main() {
    double a, b;
    
    // Nhap 2 so thuc
    printf("Nhap so thuc thu nhat (a): ");
    scanf("%lf", &a);
    printf("Nhap so thuc thu hai (b): ");
    scanf("%lf", &b);
    
    // So sanh va in ra so lon nhat
    if (a > b) {
        printf("So lon hon la: %.2lf\n", a);
    } else if (b > a) {
        printf("So lon hon la: %.2lf\n", b);
    } else {
        printf("Hai so bang nhau.\n");
    }
    
    return 0;
}
