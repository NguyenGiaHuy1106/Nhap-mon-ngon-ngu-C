#include <stdio.h>

int main (void){
	int n, m;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(1<= n <10){
		switch (n){
		case 1: printf( "mot\nso le");break;
		case 2: printf( "hai\nso chan");break;
		case 3: printf( "ba\nso le");break;
		case 4: printf( "bon\nso chan");break;
		case 5: printf( "nam\nso le");break;
		case 6: printf(" sau\nso chan");break;
		case 7: printf(" bay\nso le");break;
		case 8: printf(" tam\nso chan");break;
		case 9: printf("chin\nso le");break;
	}
		}else{
		 printf("vui long nhap so be hon 10", m);
	}
	getchar ();
	return 0;		
}
