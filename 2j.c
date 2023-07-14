#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,a,b,c;
    printf("Enter the coordinates of the point (x1,y1)\n");
    scanf("%f\n",&x1);
    scanf("%f",&y1);
    printf("The first point a is (%f,%f)\n",x1,y1);
    printf("Enter the coordinates of the point (x2,y2)\n");
    scanf("%f\n",&x2);
    scanf("%f",&y2);
    printf("The second point b is (%f,%f)\n",x2,y2);
    printf("Enter the coordinates of the point (x3,y3)\n");
    scanf("%f\n",&x3);
    scanf("%f",&y3);
    printf("The third point c is (%f,%f)\n",x3,y3);
    a=(y2-y1)/(x2-x1);
    b=(y3-y2)/(x3-x2);
    c=(y3-y1)/(x3-x1);
    if (a==b==c)
    {
        printf("These points are in same line \n");
    }
    else
    {
        printf("Points are not in same line ");
    }
    
    return 0;
}

