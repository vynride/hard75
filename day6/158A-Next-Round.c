#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int count = 0;
    int scores[50];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    int minimum_score = scores[k - 1];
    for (int j = 0; j < n; j++)
        if (scores[j] >= minimum_score && scores[j] > 0)
            count++;

    printf("%d", count);
}