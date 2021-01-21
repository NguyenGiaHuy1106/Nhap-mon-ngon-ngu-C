#include <stdio.h>
int main(){
int n;
    printf("Nhap n:");
    scanf("%d", &n);
int a[n];//mang a kich thuoc n
for(int i = 0; i < n; i++){
    printf("Nhap n phan tu mang a: ");
    scanf("%d", &a[i]);
}
printf("Cac phan tu cua mang a: ");
for(int i = 0;i < n; i++){
    printf(" %d ", a[i]); 
  }
  int m;
  int j = 0;
    printf("\nNhap m:");
    scanf("%d", &m);
for(int i = 0;i < n; i++){
  if(a[i] == m){
    j+=1;
    
  break;
}
}
if (j >0){
  printf("Co ton tai");
}
else{
  printf("Khong ton tai");
}
  return 0;
}

