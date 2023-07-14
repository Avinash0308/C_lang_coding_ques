#include <stdio.h>
int main()
{
    int a, i = 0, j = 0, k = 0;

    printf("Enter the numbers till you want\n In last i will tell you the summarization of number entered\nPress 101 to quit\n");

    while (1)
    {
        scanf("%d", &a);
        if (a == 101)
        {
            printf("Quitting .....................................\n");
            goto end;
        }
        while (a == 0)
        {
            i = i + 1;
            break;
        }
        while (a < 0)
        {
            j = j + 1;
            break;
        }
        while (a > 0)
        {
            k = k + 1;
            break;
        }
    }
end:
    printf("You have entered the zero %d times\n", i);
    printf("You have entered the positive number %d times\n", k);
    printf("You have entered the negative number %d times\n", j);
    return 0;
}
