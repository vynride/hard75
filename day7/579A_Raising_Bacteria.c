#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);

    int p = x;
    int count = 0;
    
    while(1)
    {
        if (p == 1)
            break;

        else if (p % 2 == 0)
            p = p / 2;

        else 
        {
            p = (p - 1) / 2;
            count++;
        }
    }
    printf("%d", count + 1);
}