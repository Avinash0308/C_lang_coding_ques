#include <stdio.h>
int main()
{
    int a, c=1;
    printf("Enter the number you want factorial of\n");
    scanf("%d", &a);
    if (a == 0 || a == 1)
    {
        printf("Factorial of %d is 1\n", a);
        goto end;
    }

    for (int i = 1; i <= a; i++)
    {
        c = c* i;
    
        
    }
    printf("The factorial of %d is %d \n", a, c);
end:
    return 0;
}
