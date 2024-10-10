#include <stdio.h>
#include <math.h>

int main(void)
{
    double data1, data2; // 使用double类型以支持浮点数
    char op;
    char continueCalc;

    while (1) // 无限循环，直到用户选择退出
    {
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

        // 询问用户是否想要继续
        printf("Do you want to continue(Y/N or y/n)? ");
        scanf(" %c", &continueCalc);

        if (continueCalc == 'N' || continueCalc == 'n')
        {
            break; // 如果用户输入N或n，则退出循环
        }
    }

    printf("Goodbye!\n");

    return 0;
}