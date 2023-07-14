#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number you want multiplication of\n");
    scanf("%d",&a);
    for (int i = 1; i < 11; i++)
    {
        printf("%d %c %d = %d\n",a,42,i,a*i);
    }
    
    return 0;
}

