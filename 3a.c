#include<stdio.h>
int main()
{
    int a,i=0;
        printf("Please tell me the number of hours the employees worked\none by one \n");
    while (i<10)
    {
        printf("Tell me the number off hours employee %d worked\n",i+1);
        scanf("%d",&a);
        printf("The employee had worked for extra %d hours\n so he will get Rs %d for his overtime\n",a-40,(a-40)*12);
        i++;

    }
    
    return 0;
}

