#include <stdio.h>
#include <math.h>

int main(void)
{
    double data1, data2; // 使用double类型以支持浮点数
    char op;

    printf("Please enter the expression: ");
    scanf("%lf %c%lf", &data1, &op, &data2); // 使用%lf格式化字符串读取double类型

    switch (op)
    {
        case '+':
            printf("%lf + %lf = %lf\n", data1, data2, data1 + data2);
            break;
        
        case '-':
            printf("%lf - %lf = %lf\n", data1, data2, data1 - data2);
            break;
        
        case '*':
            printf("%lf * %lf = %lf\n", data1, data2, data1 * data2);
            break;
        
        case '/':
            if ( fabs(data2) < 1e-6) // 检查data2是否近似等于0
                printf("Division by zero!\n");
            else
                printf("%lf / %lf = %lf\n", data1, data2, data1 / data2);
            break;
        
        default:
            printf("Unknown operator!\n");
    }

    return 0;
}
