#include <stdio.h> 

int main() {
	
          float a, b, c, p, s=0;
     //gia tri cua canh thu 1
          printf("Nhap canh thu nhat: ");

          scanf("%f", &a);
    //gia tri cua canh thu 2
          printf("Nhap canh thu hai: ");

          scanf("%f", &b);
    //gia tri cua canh thu 3
          printf("Nhap canh thu ba: ");

          scanf("%f", &c);
        
          if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)) {

                   printf("\nDay la ba canh cua tam giac");
          } else

                   printf("\nDay khong phai la ba canh cua tam giac");
 getchar ();                 
 return 0;
}
