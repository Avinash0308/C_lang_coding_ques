#include <stdio.h>
int main()
{
    int a, largest = -1000, smallest = 1000;
    printf("Enter the set of numbers you want to find range of\n(Number must be greater than -1000 and smaller than 1000\nEnter 1001 when set completes)\n ");
    while (1)
    {
        scanf("%d", &a);
        if (a == 1001)
        {
            goto end;
        }
        if (a > largest)
        {
            largest = a;
        }
        if (a < smallest)
        {
            smallest = a;
        }
    }
end:
    printf("%d is largest value in the set\n", largest);
    printf("and %d is smallest in the set\nThus\n", smallest);
    printf("Range of the given set is : %d", largest - smallest);
    return 0;
}
