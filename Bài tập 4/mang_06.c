#include <stdio.h>
int main(){
int n;
    printf("Nhap n:");
    scanf("%d", &n);
int a[n];//mang a kich thuoc n
for(int i = 0; i < n; i++){
    printf("a[%d]: ",i);
    scanf("%d", &a[i]);
}
printf("Cac phan tu cua mang a: ");
for(int i = 0;i < n; i++){
    printf(" %d ", a[i]); 
  }
  int m;
  int dem;
    printf("\nNhap m:");
    scanf("%d", &m);
for(int i = 0;i < n; i++){
  if(a[i] == m){
    dem += 1;
}
}
if (dem > 0){
		printf("So phan tu co gia tri la %d: %d\n",m,dem);
		printf("Chi so ca cac phan tu tren la: ");
		for (int i=0; i<n; i++){
			if (a[i]==m){
				printf(" %d",i+1);
			}
		}
	}
	else{
		printf("Khong ton tai");//khong ton tai m trong mang a
  }
  return 0;
}
