#include<stdio.h>
int main()
{
int x=100000;
printf("Population of town at end of decade is 100000\n");
   for (int i = 10; i >= 1; i--)
   {
       x=(x*10)/11;
       if (i==1)
       {
           printf("Population of town at starting of decade was %d\n",x);
           break;
       }
       printf("Population of town at end of year %d was %d\n",i-1,x);
       
   }
   
    return 0;
}

