#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    scanf("%s", s);
    int len = strlen(s);

    if (len == 1)
    {
        if (s[0] >= 'A' && s[0] <= 'Z')
            printf("%c", tolower(s[0]));

        else 
            printf("%c", toupper(s[0]));

        return 0;
    }

    int capitals = 0;
    for (int i = 1; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            capitals++;
    }

    if (capitals == len - 1)
    {
        for (int j = 0; j < len; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
                printf("%c", tolower(s[j]));
            
            else 
                printf("%c", toupper(s[j]));
        }
    }

    else
        printf("%s", s);
    return 0;
}