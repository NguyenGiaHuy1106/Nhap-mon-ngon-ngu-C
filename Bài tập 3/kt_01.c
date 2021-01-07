#include <stdio.h>

int main(void) {
  
  printf("Bang nhan 2:\n2x1=2\n2x2=4\n2x3=6\n");
  printf("Bang nhan 3:\n3x1=3\n3x2=6\n3x3=9\n");
  printf("Bang nhan 4:\n4x1=4\n4x2=8\n4x3=12\n");
  return 0;
}




#include <stdio.h>

int main(){
    printf("\nBANG CUU CHUONG\n");
    for(int i = 2; i < 5;i++){
        printf("\nBANG NHAN %d:\n", i);
        for(int j = 1; j <= 3; j++){
            printf("\t%d x %d = %d\n", i, j, i*j);
        }
    }
    getchar ();
    return 0;
}
