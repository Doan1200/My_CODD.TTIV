// Nhập vào một con số và cho biết nó lớn hơn hay nhỏ hơn 15

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b;
    float x;

    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vao so b: ");
    scanf("%d", &b);

    if (a == 0)
    {
        printf("Phuong trinh vo so nghiem!");
    }
    else
    {
        if (b == 0)
        {
            printf("Phuong trinh vo nghiem!");
        }
        else
        {
            x = (float)b / a;
            printf("Nghiem cua phuong trinh = %.2f", x);
        }
    }
}