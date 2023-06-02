#include <stdio.h>
#include <math.h>



int main()
{
    int a, b, c;
    float x1, x2;

    do
    {
        printf("Nhap a: ");
        scanf("%d", &a);
    } while (a == 0);

    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    
    int delta = (b * b) - (4 * a * c);
    printf("Del = %d\n", delta);


    if (delta == 0)
    {
        x1 = -b / (2.0 * a);
        printf("Phuong trinh co nghiem kep x1 = x2 = %f", x1);
    }
    else if (delta < 0)
    {
        printf("Phuong trinh vo nghiem\n");
    }
    else
    {
        x1 = (-b - sqrt(delta)) / (2.0 * a);
        x2 = (-b + sqrt(delta)) / (2.0 * a);

        printf("Nghiem thu nhat = %.2f\n", x1);
        printf("Nghiem thu hai = %.2f\n", x2);
    }

    return 0;
}