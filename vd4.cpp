#include <stdio.h>
int main() 
{
    int a, b;
    
    // Nhap 2 so
    printf("Nhap so thu nhat (a): ");
    scanf("%d", &a);
    printf("Nhap so thu hai (b): ");
    scanf("%d", &b);
    
    // So sanh
    if (a > b) {
        printf("So lon hon la: %d\n", a);
    } else if (b > a) {
        printf("So lon hon la: %d\n", b);
    } else {
        printf("Hai so bang nhau.\n");
    }
    
    return 0;
}
