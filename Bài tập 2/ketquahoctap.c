#include<stdio.h>

int main(void) {
  int V, T;
  //diem van
  printf("Nhap diem Van V = ");
  scanf("%Vf",&V);
  //diem toan
  printf("Nhap diem Toan T = ");
  scanf("%Tf", &T);
  //diem trung binh
  printf("V + T = %d", V + T);
  printf("DiemVan(V)\tDiemToan(T)\tDiemTrungBinh(DTB)\n");
  printf("%f\t%f\t%f\n", V,T,V + T
  );
  return 0;
}
