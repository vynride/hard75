#include <stdio.h>

int main(void)
{
    long long int n;
    scanf("%lld", &n);

    int lucky_digits = 0;
    while (n > 0)
    {
        int p = n % 10;
        n = n / 10;
        if (p == 4 || p == 7)
            lucky_digits++;
    }

    if (lucky_digits == 0)
    {
        printf("NO\n");
        return 0;
    }

    while (lucky_digits > 0)
    {
        int x = lucky_digits % 10;
        lucky_digits = lucky_digits / 10;
        if (x != 4 && x != 7)
        {
           printf("NO\n"); 
           return 0;
        }
    }

    printf("YES\n");
    return 0;
}