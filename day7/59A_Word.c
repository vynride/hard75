#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    scanf("%s", s);

    int len = strlen(s);
    int uppercase = 0, lowercase = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            uppercase++;
        else
            lowercase++;
    }

    if (uppercase > lowercase)
    {
        for (int j = 0; j < len; j++)
        {
            if (s[j] >= 97 && s[j] <= 122)
                printf("%c", s[j] - 32);

            else
                printf("%c", s[j]);
        }
        printf("\n");
        return 0;
    }

    for (int k = 0; k < len; k++)
    {
        if (s[k] >= 65 && s[k] <= 90)
            printf("%c", s[k] + 32);

        else
            printf("%c", s[k]);
    }
    printf("\n");
    return 0;
}