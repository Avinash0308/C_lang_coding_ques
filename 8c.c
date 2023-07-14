#include<stdio.h>
void poin(int * arr)
{
    int a=101;
    for (int i = 0; i < 25; i++)
    {
        if (*(arr + i) > a)
        {
            // Nothin will happen
        }
        
        if (*(arr+i)< a)
        {
            a=*(arr+i);
        }
        
        
    }
    printf("The smallesy number among all these is %d",a);
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,12,9,8,7,6,5,4,3,2,1,10,29,38,47,56,100};
    printf("The array is : {1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1,10,29,38,47,56,100}\n ");
    poin(arr);
    return 0;
}