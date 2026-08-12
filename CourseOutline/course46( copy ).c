#include <stdio.h>

int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];

    scanf_s("%d", &x);
    while (x != -1 && cnt < 100) {
        number[cnt] = x;

        // ===== 调试输出：展示每一轮过程 =====
        {
            int i;
            printf("【第%d轮】输入：%d，当前数组：[", cnt + 1, x);
            for (i = 0; i <= cnt; i++) {
                printf("%d", number[i]);
                if (i < cnt) printf(", ");
            }
            printf("]，累计和：%.0f\n", sum + x);
        }
        // ==================================

        sum += x;
        cnt++;
        scanf_s("%d", &x);
    }

    printf("\n========== 最终结果 ==========\n");
    if (cnt > 0) {
        double avg = sum / cnt;
        printf("平均值：%f\n", avg);
        printf("大于平均值的数：");
        for (int i = 0; i < cnt; i++) {
            if (number[i] > avg) {
                printf("%d ", number[i]);
            }
        }
        printf("\n");
    }
    else {
        printf("没有输入有效数据\n");
    }

    return 0;
}

