#include <stdio.h>

int main(void){
	int Thang ;
	printf("Vui long nhap thang: ");
	scanf("%d", &Thang);
	switch (Thang)
    {
    case 1:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 ngay");
        break;
    case 2:
        printf("28 ngay hoac 29 ngay");
        break;
    case 4:
    case 6:
    case 9:
   	case 11:
    	printf("30 ngay");
        break;
    default:
    printf("Vui long nhap thang");    
    }
	return 0;
}
