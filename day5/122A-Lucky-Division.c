#include <stdio.h>

int is_lucky(int num);

int main(void)
{
    int n;
    scanf("%d", &n);

    if (is_lucky(n) == 1)
    {
        printf("YES\n");
        return 0;
    }

    else
    {
        for (int i = 4; i < n; i++)
        {
            if (is_lucky(i) == 1)
            {
                if (n % i == 0)
                {
                    printf("YES\n");
                    return 0;
                }
            }
        }

    }

    printf("NO\n");
}

int is_lucky(int num)
{
    while (num > 0)
    {
        if ((num % 10 != 4) && (num % 10 != 7))
            return 0;

        num = num / 10;
    }

    return 1;
}