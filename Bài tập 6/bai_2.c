#include <stdio.h>

int main(){
	float r;
	float PI = 3.1459;
	printf (" Nhap Ban Kinh r = ");
	scanf ("%f", &r );
	
  float chuvi, dientich;
	chuvi = 2*r*PI;
	dientich = PI*r*r;
	
 printf (" Chu vi hinh tron = %f ", chuvi );
 printf(" Dien tich hinh tron = %f ", dientich );
	 
	return 0;
}
