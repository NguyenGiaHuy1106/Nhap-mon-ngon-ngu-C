#include <stdio.h>
float a, b, c;
int So_lon_nhat_la();

int main(){
  
  printf("Nhap so a = ");
  scanf("%f", &a);
  printf("Nhap so b = ");
  scanf("%f", &b);
  printf("Nhap so c = ");
  scanf("%f", &c);
  So_lon_nhat_la();
  
  return 0;
}
int So_lon_nhat_la(){
  if (a >= b && a >= c) {
	  printf("So lon nhat trong ba so la: %f",a);
	} else if (b >= c && b > c) {
		printf("So lon nhat trong ba so la: %f",b);
	} else {
		printf("So lon nhat trong ba so la: %f",c);
  }
return 0;
}
