#include <stdio.h>

int main(void){
  int l;
  printf("nhap l =");
  scanf("%f, &l");
  //met(m)
  Met = l * 1;
  //xentimet(cm)
  Xentimet = l * 100;
  //Milimet(ml)
  Milimet = l * 1000;
  printf ("\n\n");
  printf("%.1f\t %.1f\t %.1f\t", Met, Xentimet, Milimet);
  return 0;
  
}
