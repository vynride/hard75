#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);

    int remove = 0;
    int t = n - 1;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == s[i + 1])
        {
            remove++;
        }
    }

    printf("%d", remove);
    return 0;
}