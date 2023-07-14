#include <stdio.h>
int main()
{
    int b, m = 21, c;

    printf("Lets play the game.\n This game is about picking up the matchsticks\nThere will be total 21 matchsticks\nThe one who picks the last stick will lose the game\nLets start the game\n");
    printf("You can pick 1 or 2 or 3 or 4 sticks at a time and then i will pickup the sticks\n");
    while (1)
    {
    start:
        printf("Please pickup the sticks\n");
        scanf("%d", &b);
        if (b == 0 || b >= 5)
        {
            printf("You have chosen the wrong number of sticks\n");
            goto start;
        }
        m = m - b;
        printf("Number of sticks left : %d\n", m);
        c = 5 - b;
        printf("I will pick %d stick\n", c);
        m = m - c;
        printf("Number of sticks left : %d\n", m);
        if (m == 1)
        {
            printf("You lose the game\n");
            goto end;
        }
    }

end:
    return 0;
}
