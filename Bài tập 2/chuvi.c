#include <stdio.h>

int main(void) {
  //khai bao bien R
  double R;
   R = 2.5 ;
   //khai bao bien PI
  const double PI = 3.14;
  double CV, DT;
  printf ("R=%1.f", R);
  printf ("\n");
  printf ("PI=%2.f", PI);
  //chu vi
  CV = (double) 2*R*PI;
  //dien tich
  DT = (double) R*R*PI;
  printf ("\n\n");
  printf("2*R*PI\tR*R*PI\n%.1f\t%.1f",CV,DT);
  getchar();
  return 0;
}
