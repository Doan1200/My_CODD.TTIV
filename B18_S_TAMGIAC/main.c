#include <stdio.h>
#include <math.h>

int main()
{
    float xa, ya, xb, yb, xc, yc;
    float AB, BC, CA;
    float chuvi, dientich, p;

    printf("Nhap vao canh a: ");
    scanf("%f%f", &xa, &ya);
    printf("Nhap vao canh b: ");
    scanf("%f%f", &xb, &yb);
    printf("Nhap vao canh c: ");
    scanf("%f%f", &xc, &yc);

    AB = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    BC = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
    CA = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));

    float a = AB, b = BC, c = CA;

    // Kiểm tra có phải tam giác
    if (a + b > c && a + c > b && b + c > a)
  
    {
        // Kiểm tra tam giác có cân
        if (a == b || b == c || a == c)
        {
            printf("day la tam giac can!\n");
        }
        else
        {
            printf("Day khong phai la tam giac can!\n");
        }
        chuvi = a + b + c;

        // Diện tích bằng herong

        p = chuvi/2;
        printf("Chu vi cua tam giac  = %.2f\n", chuvi);

        dientich = sqrt(p*(p -a)*(p -b)*(p -c));
        printf("Dien tich cua tam giac = %.2f\n", dientich);
    }
    else
    {
        printf("Day khong phai la tam giac");
    }
    return 0;
}