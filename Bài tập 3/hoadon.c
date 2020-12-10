#include <stdio.h>;

int main(){
	int Soluong;
	float Dongia, Thanhtien;
	//nhap gia tri dongia
	printf("Dongia  = ");
	scanf ("%d", &Dongia);
	//nhap gia tri so luong
	printf("Soluong  = ");
	scanf ("%d", &Soluong);
	//mua nhieu hon 5 duoc giam gia 25%
	printf("%d", &Thanhtien);
    if(Soluong >=5 ){
	    (Soluong * Dongia)*0.75 = Thanhtien;
    	printf("%d", Thanhtien);
	}else(Soluong < 5){
	    Soluong * Dongia = Thanhtien;
		printf("%d", Thanhtien);
	}
		
	
	getchar();
	return 0 ;
}
