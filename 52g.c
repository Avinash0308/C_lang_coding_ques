#include<stdio.h>
int nature(int num);
int main()
{
    printf("Running sum of first twenty five natural numbers are\n");
    for (int i = 0; i < 25; i++)
    {
        printf("%d\n",nature(i+1));
    }
    
    return 0;
}
int nature(int num)
{
    
if (num==1)
{
    return 1;
}

    else
    {
        return  num +nature(num-1);
    }
    

}