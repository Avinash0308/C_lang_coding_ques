#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the values of angles of a triangle\n");
    scanf("%d\n",&a);

    scanf("%d\n",&b);

    scanf("%d",&c);

    d=a+b+c;

    if (d==180)
    {
        printf("The triangle with these dimensions are valid\n");
    }
    else
    {
        printf("With these dimensions a triangle cant be formed");
    }
    
    return 0;
}

