#include <stdio.h>

int main(void)
{
    long long n, m;
    scanf("%lld %lld", &n, &m);

     for (long long j = 1; j <= m; j++)
        scanf("%lld", &a[j]);

    long long time = 0;
    long long postition = 1;
    for (long long i = 1; i <= m; i++)
    {
        if (postition == a[i])
            continue;

        else if (postition < a[i])
        {
            time += a[i] - postition;
            postition = a[i];
        }

        else
        {
            time += ((n - postition) + a[i]);
            postition = a[i];
        }
    }

    printf("%lld\n", time);
}