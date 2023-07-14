#include <stdio.h>
void modify(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 3 * arr[i];
    }
}
int main()
{
    int arr[10];
    printf("Please enter all ten numbers of an array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
modify(arr);
printf("The new array is : ");
for (int i = 0; i < 10; i++)
{
    printf("%d ",arr[i]);
}

    return 0;
}