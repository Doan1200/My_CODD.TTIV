#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b;
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vao so b: ");
    scanf("%d", &b);
    int max, min;

    max = (a > b) ? a : b;
    min = (a < b) ? a : b;

    printf("Gia tri lon nhat = %d\n", max);

    printf("Gia tri nho nhat = %d\n", min);
    return 0;
}

