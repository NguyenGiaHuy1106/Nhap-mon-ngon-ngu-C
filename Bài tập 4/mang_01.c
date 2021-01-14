#include <stdio.h>
int main()
{  //khai bao mang gom 4 gia tri 
     int a[4]={3,5,7,2};
	 int i,sum = 0;
  //vong lap 
     for(i=0; i<4 ; ++i)
     {
        printf("%d\n", a[i]);
          sum += a[i];
     }

     printf("Tong = %d",sum);
    
	 getchar ();
     return 0;
}
