#include<stdio.h>
int main(){
    int n;
    int m;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        m = n % 10;
        s += m;
        n /= 10;
    }    
    printf("%d",s);
    getchar ();
    return 0;
}

//khong dung for
#include<stdio.h>
int main(){
    int n;
    int m;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
     //so thu nhat 
     m = n % 10;
     s += m;
     n /= 10;
    //so thu hai
     m = n % 10;
     s += m;
     n /= 10;
    //so thu ba
     m = n % 10;
     s += m;
     n /= 10 ;
     //hien thi ra ket qua cua 3 so
     printf("%d", s);
	getchar();
	return 0;
	}
    //khong dung for bai cua thay 
#include<stdio.h>
int main() {
  int n = 123;
  int s = 0;
  for(;n!=0;){
  	s=s+n%10;
  n=n/10;
  }
  printf("s=%d",s);
  getchar();
  return 0;
  }
