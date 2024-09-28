#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[3];
    int solveable = 0;

    while (n--)
    {
        int sure = 0;
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);

            if (arr[i] == 1)
                sure++;
        }

        if (sure >= 2)
            solveable++;
    }

    printf("%d\n", solveable);

}