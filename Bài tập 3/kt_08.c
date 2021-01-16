#include <stdio.h>
int main ()
{
    float x = 0, y = 0;
    printf("Nhap so thuc x: ");
    scanf("%f", &x);
    printf("Nhap so thuc y: ");
    scanf("%f", &y);

    float a = x * y;
    if (a > 0)
    {   //khi x*y lon hon 0 se cho ra cung dau
        printf("x va y cung dau");
    }
    else if (a < 0)
    {   //khi x*y be hon 0 se cho ra trai dau
        printf("x va y trai dau");
    }
    else
    {
        if (x == 0 && y == 0)
        {   //khi ca x va y = 0 se ko xac dinh
            printf("khong xac dinh boi vi x = 0 va y = 0");
        }
        else if (x == 0)
        {   //khi x = 0 se kko xac dinh
            printf("khong xac dinh boi vi x = 0");
        }
        else
        {   //khi y = 0 se ko xac dinh
            printf("khong xac dinh boi vi y = 0");
        }
    }
getchar ();
return 0;
}
