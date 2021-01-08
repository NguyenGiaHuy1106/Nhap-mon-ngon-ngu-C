#include <stdio.h>
int main(){
  int h;
  
  printf("h=");
  scanf("%d", &h);
  switch(h){
 //mot hang 	
case 1: printf("\t   *\n"); 
break;
//hai hang
case 2:
printf("\t   *\n");
printf("\t  ***\n");
break;
//ba hang
case 3:
printf("\t   *\n");
printf("\t  ***\n");
printf("\t *****\n");
break;
//bon hang
case 4:
printf("\t   *\n");
printf("\t  ***\n");
printf("\t *****\n");
printf("\t*******\n");
break;
}
getchar();
return 0;
}
