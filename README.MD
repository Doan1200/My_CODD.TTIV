# BÀI 1: KIỂU DỮ LIỆU

## I. KIỂU DỮ LIỆU

1. Không có dữ liệu: `void`

2. Ký tự: `char`

3. Số nguyên: 

``` cpp   
    - Có dấu: Short, int (-32 to 32k), long (-2 to 2 tỷ)

    - Không dấu: unsigned short, unsigned int (0 to 65k), unsigned long (0 to 4 tỷ)
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

# BÀI 6: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT

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







     