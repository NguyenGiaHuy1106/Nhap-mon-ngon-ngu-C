vong lap for
#include <stdio.h>
main(){
int i;
for(i = 1; i < 20; i+=2)
//khong hien thi so 5, 11 va 15
{if((i == 5) || (i == 11) || (i == 15))
   continue;
printf("%5d", i);
}
getchar();
return 0;
}

vong lap while
   #include <stdio.h>
main(void){
int i;
i = 1;
while(i < 19){
	i+=2;
//khong hien thi so 5, 11 va 15
{if((i == 5) || (i == 11) || (i == 15))
   continue;
printf("%5d", i);
}
}
getchar();
return 0;
}
