#include<stdio.h>
float avg(int a , int b, int c);
float per(int a , int b, int c);
int main()
{
    int a,b,c;
    printf("Enter the marks obtained by student in three subjects (out of 50)\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nAverage marks obtained : %f\n",avg(a,b,c));
    printf("Percentage marks : %f\n",per(a,b,c));
    return 0;
}
float avg(int a , int b, int c)
{
    float x;
    x=(float)(a+b+c)/3;
    return x;
}
float per(int a , int b, int c)
{
      float q;
      q=(float)2*(a+b+c)/3;
      return q;
}