#include <stdio.h>;

int main(){
	int Soluong;
	float Dongia, Thanhtien;
	//nhap gia tri dongia
	printf("Dongia = ", Dongia);
	scanf ("%d", &Dongia);
	//nhap gia tri so luong
	printf("Soluong  =  ", Soluong);
	scanf ("%d", &Soluong);
	Thanhtien = Dongia * Soluong;
	//mua nhieu hon 5 va thanh tien hon 500 duoc giam gia 50%
        if(Soluong >=5 && Thanhtien >= 500 ){
	    Thanhtien = (Dongia*Soluong)*0.5;
    	printf("%d", &Thanhtien);
	}else{printf("%d",Thanhtien);
	}
	getchar();
	return 0 ;
}

