#include <stdio.h>

int main(void){
	int a = 9, b = 6;
	char pt;
	printf("Vui long nhap phep tinh: ");
	scanf("%c", &pt);
	switch (pt)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    default:
    printf("Vui long nhap phep tinh");
        break;
    }
	return 0;
}
