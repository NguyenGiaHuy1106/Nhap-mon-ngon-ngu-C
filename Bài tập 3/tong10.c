#include <stdio.h>

int main() {
	int a, b, c;
	printf("nhap gia tri lon nhat : \n");
	scanf ("%d", &c);
	for (a=0, b=c; a<=c; a++,b--)
	printf("\n%d + %d = %d", a,b, a+b);
	printf("%d\t", b);
    return 0;
}
