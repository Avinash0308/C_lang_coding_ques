#include <stdio.h>
#include <math.h>
float peri(int a, int b, int c);
float area(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Please enter the values of side 1,2,3 respectively\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The length of side 1 is : %d\n", a);
    printf("The length of side 2 is : %d\n", b);
    printf("The length of side 3 is : %d\n", c);
    if (c > a + b || b > a + c || a > b + c)
    {
        printf("May you know how to form a triangle\n");
        goto end;
    }
   printf("The area of triangle is %f", area(a, b, c));
   
end:
    return 0;
}
float area(int a, int b, int c)
{
    return pow(peri(a, b, c), 0.5);
}
float peri(int a, int b, int c)
{
    float s;
    s = (float)(a+b+c)/2;
    
    return s*(s-a)*(s-b)*(s-c);
}