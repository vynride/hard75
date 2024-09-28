#include <stdio.h>

int main(void)
{
    int n, result = 0;
    scanf("%d", &n);

    char s[4];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);

        for (int j = 0; j < 3; j++)
        {
            if (s[j] == '+')
            {
                result++;
                break;
            }

            else if (s[j] == '-')
            {
                result--;
                break;
            }
        }

    }

    printf("%d\n", result);
}