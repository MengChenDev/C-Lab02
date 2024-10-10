#include <stdio.h>

int main() {
    // 声明变量
    float weight, height, bmi;
    
    // 提示用户输入身高和体重
    printf("请输入您的身高（米）：");
    scanf("%f", &height);
    printf("请输入您的体重（公斤）：");
    scanf("%f", &weight);
    
    // 计算BMI
    bmi = weight / (height * height);
    
    // 判断体型
    if (bmi < 18) {
        printf("低体重\n");
    } else if (bmi >= 18 && bmi < 25) {
        printf("正常体重\n");
    } else if (bmi >= 25 && bmi < 27) {
        printf("超重体重\n");
    } else {
        printf("肥胖\n");
    }
    
    return 0;
}
