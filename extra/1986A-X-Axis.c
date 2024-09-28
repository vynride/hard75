#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x1, x2, x3; 
        scanf("%d %d %d", &x1, &x2, &x3);
        
        int largest, smallest;

        if (x1 <= x2 && x1 <= x3)
            smallest = x1;
        else if (x2 <= x1 && x2 <= x3)
            smallest = x2;
        else
            smallest = x3;

        if (x1 >= x2 && x1 >= x3)
            largest = x1;
        else if (x2 >= x1 && x2 >= x3)
            largest = x2;
        else
            largest = x3;

        int middle;
        if ((x1 == largest && x2 == smallest) || (x1 == smallest && x2 == largest))
            middle = x3;
        else if ((x3 == largest && x2 == smallest) || (x3 == smallest && x2 == largest))
            middle = x1;
        else
            middle = x2;

        int minimum = 3 * (largest - smallest) + 1;
        for (int i = smallest; i <= largest; i++)
        {
            int distance = abs(i - smallest) + abs(middle - i) + abs(largest - i);

            if (distance < minimum)
                minimum = distance;
        }

        printf("%d\n", minimum);
    }
}