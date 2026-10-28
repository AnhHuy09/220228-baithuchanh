#include <stdio.h>
int main() 
{
    int i, j;
    printf("\n\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%dx%d=%-2d\t", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}

