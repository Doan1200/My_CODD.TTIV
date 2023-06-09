# BÀI 1: KIỂU DỮ LIỆU

## I. KIỂU DỮ LIỆU

1. Không có dữ liệu: `void`

2. Ký tự: `char`

3. Số nguyên: 

``` cpp   
    Có dấu: Short, int (-32 to 32k), long (-2 to 2 tỷ)

    Không dấu: unsigned short, unsigned int (0 to 65k), unsigned long (0 to 4 tỷ)
```

4. Số thực: `float, double, long double`

# BÀI 2: XUẤT DỮ LIỆU

Thư viện `stdio.h`

**Xuất:** `printf("Được_in_ra_màn_hình", biến_truyền vào);`

``` cpp
%d: Số nguyên
%f: Số thực
%s: Chuỗi
%c: Ký tự
```

**Nhập** `scanf("%kiểu_dữ_liệu", &tên_biến);`

# BÀI 3: CÁC PHÉP TOÁN CƠ BẢN

``` cpp
+ Cộng
- Trừ
* Nhân
/ Chia
% Chia lấy dư
++ Cộng thêm 1 đơn vị
-- Trừ đi 1 đơn vị
```

>Lưu ý: Phép toán ++ và -- có thể đặt ở trước hoặc sau toán hạng.

# BÀI 4: PHÉP TOÁN ++ VÀ --

``` cpp
a++ tương tự a = a + 1  // Giá trị a thay đổi sau khi câu lệnh kết thúc

++a tương tự a = a + 1  // Giá trị a thay đổi trước khi câu lệnh kết thúc
```

**VÍ DỤ**

``` cpp

int a = 5;

printf("%d\n", a++); // a = 5

printf("%d\n", a);  // a = 6

printf("%d\n", ++a); // a = 7 
```

# BÀI 5: TOÁN TỬ SO SÁNH

``` cpp
==  So sánh bằng                    4 == 3  FALSE
>   So sánh lớn hơn                 2 > 1   TRUE
<   So sánh nhỏ hơn
!=  So sánh khác
>=  So sánh lớn hơn hoặc bằng
<=  So sánh nhỏ hơn hoặc bằng

Kết quả so sánh
0 == FALSE
1 == TRUE
```

# BÀI 6: TOÁN TỬ ĐIỀU KIỆN

**Cấu trúc:**  `(bieu_thuc_1) ? (bieu_thuc_2) : bieu_thuc_3;`

```cpp 
if(bieu_thuc_1 == TRUE)
{
    bieu_thuc_2;
}
else
{
    bieu_thuc_3;
}
```

**VÍ DỤ** `x = (5>=3)?1:0`

# BÀI 7: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT

Nhập vào 2 số nguyên a, b từ bàn phím, xuất ra màn hình giá trị nhỏ nhất và lớn nhất

```cpp 
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
```

# BÀI 10: GIẢI PHƯƠNG TRÌNH BẬC NHẤT

>Bài 1: Viết phương trình bậc nhất 1 ẩn `ax + b = 0` với a != 0

>Lưu ý: Trong bài tập này nếu người dùng nhập = 0 sẽ phải nhập lại.

``` cpp
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
```

# BÀI 11: CÁC HÀM TOÁN HỌC TRONG LẬP TRÌNH C

Thư viện: `math.h`

``` cpp
ceil(number)        Làm tròn lên
floor(number)       Làm tròn xuống
sqrt(number)        Trả về căn bậc 2
pow(base, exponent) Trả về số mũ đã cho
abs(number)         Số nguyên Trả về giá trị tuyệt đối
fabs(number)        Số thực
```
# BÀI 12: SỬ DỤNG IF ELSE ĐỂ GIẢI PHƯƠNG TRÌNH BẬC 1

```cpp
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
```

# BÀI 13: GIẢI PHƯƠNG TRÌNH BẬC 2

``` cpp
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
```

# BÀI 14: SWITCH CASE

Cấu trúc:

``` cpp
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
```

# BÀI 17: IN RA SỐ NGÀY TRONG THÁNG SỬ DỤNG SWITCH CASE


>Bài toán: Viết chương trình nhập tháng năm, hãy tìm ra số ngày trong tháng đó và xuất ra console

**Cách kiểm tra năm nhuận:** ``năm % 400 && năm % 4 && năm % 100 = 1`

``` cpp
#include <stdio.h>

int main()
{
    int thang, nam;
    printf("Nhap vao thang: ");
    scanf("%d", &thang);
    printf("Nhap vao nam: ");
    scanf("%d", &nam);

    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang co 31 ngay!");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("Thang co 30 ngay!");
        break;

    case 2:
        if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
        {
            printf("Thang co 29 ngay!");
        }
        else
        {
            printf("Thang co 28 ngay!");
        }
        break;

    default:
    {
        printf("Error");
    }
    }
    return 0;
}
```

# BÀI 18: TÍNH CHU VI VÀ  DIỆN TÍCH TRONG C

``` cpp
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
```

# BÀI 21: BẢNG MÃ ASCII VÀ CHỮ CÁI ALPHABET

``` cpp
#include<stdio.h>

int main(){
    
    for(char i = 65; i <=90; i++)
    {
        // printf("%c ", i);

        printf("%d - %c\n", i, i );
    }

    return 0;
}
```

# BÀI 22: VÒNG LẶP WHILE
> Tính tổng từ 1 --> n

``` cpp
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
```








     