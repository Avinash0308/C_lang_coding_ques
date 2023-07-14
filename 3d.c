#include<stdio.h>
int main()
{
    int i=0;
    printf("ASCII value and there all characters are\n");
    while (i<=255 && i>=0)
    {
        printf("%d for %c\n",i,i);
        i++;
    }
    
    return 0;
}

