#include <stdio.h>

int main(){
	int n;
  printf("Nhap n: ");
  scanf("%d", &n);

  int S = 0;
  for(int i= 0; i<= n; i++){
    S+=i*i;
  }
  printf("S= 1^2+2^2+...+%d^2 = %d ", n,S);
	return 0;
}
