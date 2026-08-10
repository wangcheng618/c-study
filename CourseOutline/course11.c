#include <stdio.h>
int main()
{
    int x;
    //scanf_s("%d", &x);
    int cnt = 0;
    for (x = 2;x < 100; x++)
    while ( cnt < 50){

        int i;
        int isPrime = 1;//x是素数
        for (i = 2;i < x;i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }if (isPrime == 1) {
            printf("%d", x);
            cnt++;
        }
        x++;
    }
    printf("\n");

    return 0;
}
