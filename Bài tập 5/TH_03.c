#include <stdio.h>
int a, b, c;
int So_lon_nhat_la();

int main(){
  
  printf("Nhap so a = ");
  scanf("%d", &a);
  printf("Nhap so b = ");
  scanf("%d", &b);
  printf("Nhap so c = ");
  scanf("%d", &c);
  So_lon_nhat_la();
  
  return 0;
}
int So_lon_nhat_la(){
  if (a >= b && a >= c) {
	  printf("So lon nhat trong ba so la: %d",a);
	} else if (b >= c && b > c) {
		printf("So lon nhat trong ba so la: %d",b);
	} else {
		printf("So lon nhat trong ba so la: %d",c);
  }
return 0;
}
