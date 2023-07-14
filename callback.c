// Tagging this line again this is the power of me shown again signing off

#include <stdio.h>

#include <math.h>

float edistance(float x1, float x2, float y1, float y2)
{
    float a = pow((x1 - x2), 2);

    float b = pow((y1 - y2), 2);

    float c = a + b;

    float d = pow(c, 0.5);

    return d;
}

void AreaOfCircle(float x1, float x2, float y1, float y2, float (*fptr)(float, float, float, float))
{
    float area = (3.14) * (pow(fptr(x1, x2, y1, y2), 2));

    printf("The distance between the two given points is : %f", fptr(x1, x2, y1, y2));

    printf("\n\nNow, adding further to it the area formed by this distance taken as the radius of our new circle will be : %f", area);
}

int main()
{
    float x1, x2, y1, y2;

    printf("\n\n\nHello users , in this program you will be able to find distance between any two points in the cartesian plane\n\nAnd also, the area of circle formed by taking the distance as radius of our circle\nFirstly, you have to tell me the points \n\n");

    printf("The point x1 is :");
    scanf("%f", &x1);

    printf("The point x2 is :");
    scanf("%f", &x2);

    printf("The point y1 is :");
    scanf("%f", &y1);

    printf("The point y2 is :");
    scanf("%f", &y2);

    printf("\nThe two input points are (%f,%f) and (%f,%f)\n\n", x1, y1, x2, y2);

    float (*fptr)(float, float, float, float);

    fptr = edistance;

    AreaOfCircle(x1, x2, y1, y2, fptr);

    return 0;
}