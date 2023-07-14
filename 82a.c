#include<stdio.h>
void search(int *arr,int a)
{
    int n=0;
    for (int i = 0; i < 25; i++)
    {
        if (a==arr[i])
        {
            n++;
        }
        
    }
    if (n==0)
    {
        printf("The number you searched for is not present in the array\n");
    }
    else
    {
        printf("The nunber is present in the array and it appears for %d times\n",n);
    }
    
}
int main()
{
    int arr[25];
    int a;
    printf("Please enter the all elements of an array\n\n");
    for (int i = 0; i < 25; i++)
    {
        printf("Please input the value %d : ",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    printf("Please input the value you want to search for : ");
    scanf("%d",&a);
    printf("\n\n");
    printf("The number you searched for is : %d\n",a);
    search(arr,a);
    return 0;
}