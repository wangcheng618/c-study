#include <stdio.h>

int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];

    scanf_s("%d", &x);
    while (x != -1 && cnt < 100) {  // 加数组边界保护
        number[cnt] = x;
        sum += x;
        cnt++;
        scanf_s("%d", &x);
    }

    if (cnt > 0) {
        double avg = sum / cnt;      // 提前算好平均值
        printf("平均值：%f\n", avg);
        printf("大于平均值的数：\n");
        for (int i = 0; i < cnt; i++) {
            if (number[i] > avg) {
                printf("%d\n", number[i]);
            }
        }
    }
    else {
        printf("没有输入有效数据\n");
    }

    return 0;
}
