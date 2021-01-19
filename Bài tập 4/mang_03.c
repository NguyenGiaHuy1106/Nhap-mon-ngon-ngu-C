#include <stdio.h>
int main(){
	int n;
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
  if (a[i] % 2 == 0) {
      printf("\n%d la so chan\n", a[i]);// hien thi so chan trong mang a
   } else {
      printf("\n%d la so le\n", a[i]);// hien thi so le trong mang a
   }
  }
  for(int i = 0;i < n; i++){
    if (a[i] == 0) {
       printf("\nso%d \n", a[i]);//hien thi so 0
    }
  }
     return 0;
}
