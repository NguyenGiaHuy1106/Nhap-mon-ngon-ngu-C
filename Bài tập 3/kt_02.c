#include <stdio.h>
int main (){
	float a,b,c; 
	printf("\nNhap He So Bac 2: a = ");
	scanf("%f", &a);
	printf("\nNhap He So Bac 1: b = ");
	scanf("%f", &b);
	printf("\nNhap He So Tu Do : c = ");
	scanf("%f", &c);	
	if(a == 0){
		if (b == 0)
		   printf("\n Phuong Trinh Vo Nghiem");
		else 
		   printf("Phuong Trinh Co 1 Nghiem: x = %f", (-c/b));     
	}
	    else{
		float delta, x1, x2;
		delta = b*b - 4*a*c;//delta = b² – 4ac 
		if(delta>0){
			x1= (float)((-b + sqrt(delta))/2*a);//sqrt dung de tinh can bac 2 
			x2= (float)((-b - sqrt(delta))/2*a);
			printf("\nPhuong Trinh Co 2 Nghiem: x1=%f, x2=%f", x1, x2); //delta > 0 ta co 2 nghiem phan biet
		}else if(delta == 0){
			x1= (-b/(2*a));
			printf("\nPhuong Trinh Co 2 Nghiem kep: x1= x2= %f", x1); //delta = 0 ta co nghiem kep
		}else
		    printf("\nPhuong Trinh Vo Nghiem");	//delta < 0 nen vo nghiem
	}
getchar ();
return 0;
}
