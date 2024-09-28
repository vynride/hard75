#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int score1 = 0, score2 = 0, saved_names = 0;
    char team1[11];
    char team2[11];
    char team[11];

    while (n--)
    {
        scanf("%s", team);

        if (strcmp(team1, team) == 0)
            score1++;

        else if (strcmp(team2, team) == 0)
            score2++;
        
        else
            if (saved_names == 0)
            {
                strcpy(team1, team);
                score1++;
                saved_names = 1;
            }

            else
            {
                strcpy(team2, team);
                score2++;
            }
    }
    
    if (score1 > score2)
        printf("%s\n", team1);

    else
        printf("%s\n", team2);

    return 0;
}