#include <stdio.h>

int main()
{
    int n;  
    int x = 0;  
    char statement[4];  // Mảng ký tự để lưu câu lệnh

    scanf("%d", &n);

    // Kiểm tra điều kiện nếu n vượt quá giới hạn cho phép
    if (n > 150)
    {
        printf("qua muc quy dinh");  // In ra thông báo nếu n lớn hơn 150
    }

    // Vòng lặp để xử lý từng câu lệnh
    for (int i = 0; i < n; i++)
    {
        scanf("%s", statement);

        // Kiểm tra nếu câu lệnh là lệnh tăng giá trị của x
        if (statement[1] == '+' && statement[2] == '+')
        {
            x++;  
        }
        // Kiểm tra nếu câu lệnh là lệnh giảm giá trị của x
        else if (statement[1] == '-' && statement[2] == '-')
        {
            x--; 
        }
    }
    printf("%d", x);
    return 0;
}
