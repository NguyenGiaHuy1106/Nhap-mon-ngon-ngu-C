#include <stdio.h>;

int main(){
	int A, B;
	//nhap gia tri cua A
	printf("nhap A = ");
	scanf ("%d",&A);
	//nhap gia tri cua B
	printf("nhap B = ");
	scanf ("%d", &B);
	//so sanh A lon hon B
	if(A >B){
		printf("A > B", A,B );
	//so sanh A bang B
	}else if (A == B){
		printf("A = B", A,B);
	//so sanh A be hon B
	}else {
	    printf("A < B", A,B );
	}
	
	getchar();
	return 0 ;
}
