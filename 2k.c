#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,x1,y1,r;
    double a,b,c;
    printf("Enter the coordinates of the center of the circle \n");
    scanf("%d\n",&x);
    scanf("%d",&y);
    printf("(%d,%d) is the center of the circle\n",x,y);
    printf("Length of the radius of the circle is\n");
    scanf("%d",&r);
    printf("Enter the coordinates of the other point \n");
    scanf("%d\n",&x1);
    scanf("%d",&y1);
    printf("(%d,%d) is the coordinates of the point mentioned\n",x1,y1);
    a=pow((x-x1),2);
    b=pow((y-y1),2);
    c=sqrt(a+b);
    if (c<r)
    {
        printf("Point lies inside the circle");
    }
    
    if (c==r)
    {
        printf("Point lies on the circle");
    }
    
    if (c>r)
    {
        printf("Point lies outside the circle ");
    }
     return 0;
}

