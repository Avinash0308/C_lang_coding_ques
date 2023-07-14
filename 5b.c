#include<stdio.h>
#include<math.h>
int power(int x, int y)
{
    int c;
    c=pow(x,y);
    return c;
}
int main()
{
    int a,b;
    printf("Please tell me the number and the power you want to raise it\n");
    scanf("%d %d",&a,&b);
    printf("%d raised to power %d is %d\n",a,b,power(a,b));
    return 0;
}