#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    int count = 0;

    scanf_s("%d", &number);
    while (number != -1) {
        sum += number;
        count++;
        scanf_s("%d", &number);
    }printf("%f\n", 1.0 * sum / count);

    return 0;
}
