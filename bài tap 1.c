#include <stdio.h>
int main() 
{
	int ngay;
	print("nhap vao mot so nguyen (1-7): ");
	scanf("%d", &ngay);
	switch (ngay) {
		case 1: printf("chu nhat"); break;
		case 2: printf("thu hai"); break;
		case 3: printf("thu ba"); break;
		case 4: printf("thu tu"); break;
		case 5: printf("thu nam"); break;
		case 6: printf("thu sau"); break;
		case 7: printf("thu bay"); break;
		default:
			printf("loi: so khong hop le!");
			break;
	}
	return 0;
}
		
	
