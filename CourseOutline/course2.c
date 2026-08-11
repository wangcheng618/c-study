#include <stdio.h>
int main()
{
    long long x;  // 改用64位长整型，范围约 ±9e18
    int n = 0;

    scanf_s("%lld", &x);

    // 处理输入为0的特殊情况（0也是1位数）
    if (x == 0) {
        n = 1;
    }
    else {
        while (x > 0) {
            n++;
            x /= 10;
        }
    }

    printf("位数是：%d\n", n);
    return 0;
}
