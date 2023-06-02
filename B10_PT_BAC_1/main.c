#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b;

    float x;

    printf("Nhap vao bieu thuc ax + b = 0\n");
    do
    {
        printf("Nhap vao bien a: ");
        scanf("%d", &a);
    } while (a == 0);

    printf("Nhap vao bien b: ");
    scanf("%d", &b);

    while (b == 0)
    {
        printf("Bien b phai khac  0!\n");
        printf("Nhap vao bien b: ");
        scanf("%d", &b);
    }

    x = (float)a / b;
    printf("Nghiem cua phuong trinh x = %.2f", x);
    return 0;
}