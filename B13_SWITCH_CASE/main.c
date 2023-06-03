#include<stdio.h>

int main()
{
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            printf("Thu hai");
            break;
        case 2:
            printf("Thu ba");
            break;
        case 3:
            printf("Thu tu");
            break;
        case 4:
            printf("Thu nam");
            break;
        case 5:
            printf("Thu sau");
            break;
        case 6:
            printf("Thu bay");
            break;
        case 7:
            printf("Chu nhat");
            break;
        default:
            printf("Error: Unknown number");
    }

    return 0;
}


