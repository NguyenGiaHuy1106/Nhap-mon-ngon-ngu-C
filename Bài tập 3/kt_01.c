#include <stdio.h>
 
int main(){
    printf("\nBANG CUU CHUONG\n");
    //in ra bang tu 2 den 9
    for(int i = 2; i < 10;i++){
        printf("\nBANG NHAN %d:\n", i);
        //thuc hien phep tinh tu 1 den 10
        for(int j = 1; j <= 10; j++){
            printf("\t%d x %d = %d\n", i, j, i*j);
        }
    }
    getchar ();
    return 0;
}
