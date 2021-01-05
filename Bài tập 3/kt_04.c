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
