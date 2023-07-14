#include <stdio.h>

int main(int argc, char const *argv[])

{
    int a, b;
    printf("Enter the number \n");
    scanf("%d", &a);
    b = a % 2;
    if (b == 1)
    {
        printf("%d is a odd number\n", a);
    }
    else
    {
        printf("%d is a even number\n", a);
    }

    return 0;
}
