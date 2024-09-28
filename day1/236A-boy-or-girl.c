#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[101];
    scanf("%s", arr);

    int len = strlen(arr);

    char res[101];
    int len2 = 0;

    int found = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (arr[i] == res[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            res[len2] = arr[i];
            len2++;
        }

        found = 0;
    }

    if (len2 % 2 == 0)
        printf("CHAT WITH HER!\n");

    else
        printf("IGNORE HIM!\n");

    return 0;
}