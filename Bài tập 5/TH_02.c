#include<stdio.h>
int main(){
    int n;
    int m;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(m = 0; m < n; m++){
        s+=m;
    }    
    printf("%d",s);
    getchar ();
    return 0;
}
