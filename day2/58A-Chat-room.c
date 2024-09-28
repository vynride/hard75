#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    scanf("%s", s);
    int len = strlen(s);

    char o[5] = {'h', 'e', 'l', 'l', 'o'};

    int check_from = 0;
    int letters_found = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = check_from; j < len; j++)
        {
            if (s[j] == o[i])
            {
                letters_found++;
                check_from = j + 1;
                break;
            }
        }
    }

    // hello has 5 letters
    if (letters_found == 5)
        printf("YES\n");
        
    else 
        printf("NO\n");

    return 0;
}