#include <stdio.h>
int main()
{
    int price = 0;
    int bill = 0;
    printf("请输入金额：");
    scanf_s("%d", &price);
    printf("请输入票面：");
    scanf_s("%d", &bill);

    if (bill >= price)
    {
        printf("应该找您：%d\n", bill - price);
    }
    else
    {
        printf("票面金额不足！\n");
    }

    return 0;
}
