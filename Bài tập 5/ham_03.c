#include <stdio.h>
void Nhap_pt_mang(int a[]);

void Hien_thi_pt_mang(int a[]);

void Hien_thi_tong_chan(int a[]);
 
void Dem_chan_le_0(int a[]);
 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}
void Nhap_pt_mang(int a[]){
  int n;
for(int i =0; i < n; i++){
printf("Nhap phan tu thu [%d]:", i);
scanf("%d", &a[i]);
 }
} 
void Hien_thi_pt_mang(int a[]){
  int n;
  printf("Cac phan tu cua mang a: ");
for(int i = 0;i < n; i++){
    printf(" %d ", i); 
    
  }
}
void Hien_thi_tong_chan(int a[]){
  int n;
  int sum;
  for(int i=0; i<4 ; ++i)
     {
        if (a[i] % 2 == 0) {
      printf("\n%d Tong chan\n", sum =+a[i]);
     }
     }
     
  }
  void Dem_chan_le_0(int a[]){
    int n;
    for(int i = 0;i < n; i++){
  if (a[i] % 2 == 0) {
      printf("\n%d la so chan\n", a[i]);// hien thi so chan trong mang a
   } else {
      printf("\n%d la so le\n", a[i]);// hien thi so le trong mang a
   }
  }
  }
