#include <stdio.h>

int main (void){
	int n, m;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(1<= n <10){
		switch (n){
		case 1: printf( "one");break;
		case 2: printf( "two");break;
		case 3: printf( "there");break;
		case 4: printf( "four");break;
		case 5: printf( "five");break;
		case 6: printf(" six");break;
		case 7: printf(" seven");break;
		case 8: printf(" eight");break;
		case 9: printf("nine");break;
	}
		}else{
		 printf("vui long nhap so be hon 10", m);
	}
	getchar ();
	return 0;		
}
