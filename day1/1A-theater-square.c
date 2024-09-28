#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long long n, m, a;
    scanf("%llu %llu %llu", &n, &m, &a);
    unsigned long long p = (ceil(m / (double) a) * ceil (n / (double) a));
    printf("%llu", p);

    return 0;
}