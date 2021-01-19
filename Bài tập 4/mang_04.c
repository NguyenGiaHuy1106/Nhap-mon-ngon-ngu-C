#include <stdio.h>
int main(){
	int n;
  int s;
	printf("Nhap n = ");//hien thi gia tri n
	scanf("%d", &n);
  
  int a[n];
	for(int i = 0;i < n; i++){
    printf("Nhap phan tu thu %d = ", i + 1);//hien thi thu tu phan tu trong mang a
	scanf("%d", &a[i]);
  }
    printf("mang a: ");
  for(int i = 0;i < n; i++){
    printf(" %d ", a[i]); 
  }
  for(int i = 0;i < n; i++){
   s+=a[i];
  }
  printf("\nTong cua mang a la : %d", s);//tong cua mang a
     return 0;
}
