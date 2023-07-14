#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c,d;
   printf("Enter the breadth of a rectangle\n");
   scanf("%d",&a);
   printf("Enter the length of a rectangle\n");
   scanf("%d",&b);
   c=a*b;
   d=2*(a+b);
   printf("Area of the rectangle is %d\n",c);
   printf("Perimeter of the rectangle is %d\n",d);
   if (c>d)
   {
       printf("Area of the triangle is greater than its perimeter\n");
   }
   if (c==d)
   {
       printf("Area of the triangle is equal to its perimeter\n");
   }
   else
   {
       printf("Perimeter of the rectangle is greater than its area\n");
   }
   
}

