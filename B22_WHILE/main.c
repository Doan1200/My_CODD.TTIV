#include<stdio.h>

int main(){
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);

    int tong = 0;
    int i = 0;
    while(i<=n)
    {
        tong += i;
        i++;
    }
    printf("Tong = %d", tong);
    return 0;
}