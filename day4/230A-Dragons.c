#include <stdio.h>
#include <stdlib.h>

int comparebystrength(const void *a, const void *b);

typedef struct
{
    int strength;
    int bonus;
} dragon;

int main(void)
{
    int s, n;
    scanf("%d %d", &s, &n);

    dragon dragons[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &dragons[i].strength, &dragons[i].bonus);
    }

    qsort(dragons, n, sizeof(dragon), comparebystrength);

    for (int j = 0; j < n; j++)
    {
        if (s > dragons[j].strength)
        {
            s += dragons[j].bonus;
        }

        else
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}

int comparebystrength(const void *a, const void *b)
{
    return ((dragon*)a)->strength - ((dragon*)b)->strength;
}
