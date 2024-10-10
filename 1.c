#include <stdio.h>

int main() {
    // 定义变量
    char sex, sports, diet;
    float faHeight, moHeight, predictedHeight;

    // 从键盘输入数据
    printf("请输入性别（F表示女性，M表示男性）：");
    scanf("%c", &sex);

    printf("请输入父亲身高：");
    scanf("%f", &faHeight);

    printf("请输入母亲身高：");
    scanf("%f", &moHeight);

    printf("是否喜爱体育锻炼（Y表示是，N表示否）：");
    scanf("%c\n", &sports);

    printf("是否有良好的饮食习惯（Y表示是，N表示否）：");
    scanf("%c\n", &diet);

    // 根据性别计算预测身高
    if (sex == 'M') { // 男性
        predictedHeight = (faHeight + moHeight) * 0.54;
    } else if (sex == 'F') { // 女性
        predictedHeight = (faHeight * 0.923 + moHeight) / 2;
    }

    // 考虑体育活动和饮食习惯对身高的影响
    if ((sports == 'Y' && diet == 'Y')) {
        predictedHeight *= 1.02; // 增加身高2%
    } else if (sports == 'Y' || diet == 'Y') {
        predictedHeight *= 1.015; // 增加身高1.5%
    }

    // 输出结果
    printf("预测成年时身高为：%.2f cm\n", predictedHeight);

    return 0;
}
