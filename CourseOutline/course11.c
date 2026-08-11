#include <stdio.h>
int main()
{
    int x;
    int cnt = 0;

    // 外层循环：从2开始遍历数字，直到找到50个素数
    for (x = 2; cnt < 50; x++)
    {
        int isPrime = 1;
        // 核心优化：只遍历到x的平方根
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break; // 找到因子立刻跳出，不继续遍历
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", x);
            cnt++;
            // 每10个换一行，排版更清晰
            if (cnt % 10 == 0)
                printf("\n");
        }
    }

    printf("\n前50个素数输出完毕\n");
    return 0;
}
