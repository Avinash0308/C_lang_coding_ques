#include<stdio.h>
int main()
{
    int arr[6];
    int array[6];
printf("Please enter all the element of an array\n");
for (int i = 0; i < 6; i++)
{
    scanf("%d",&arr[i]);
}
for (int j = 0; j < 6; j++)
{
    array[j]=arr[5-j];
}
printf("Elements of your array are : ");
for (int i = 0; i < 6; i++)
{
    printf("%d ",arr[i]);
}
printf("\nElements of my array are : ");
for (int i = 0; i < 6; i++)
{
    printf("%d ",array[i]);
}

    return 0;
}