#include <stdio.h>
int main()
{
    int div, sub;
    printf("This program will help you in finding the grace marks student will get if he is fail in any subject\n");
    printf("Please tell me the division the student is pass with\n");
    scanf("%d", &div);
    printf("Pleae also tell me the number of subjects student is fail in \n");
    scanf("%d", &sub);
    switch (div)
    {
    case 1:
        if (sub > 3)
        {
            printf("As you are fail in more than 3 subjects you will not get any grace marks\nYou have to give your exam again\n");
        }
        else
        {
            printf("You will get %d grace marks\n", sub * 5);
        }

        break;
    case 2:
        if (sub > 2)
        {
            printf("As you are fail in more than 2 subjects and have passed with class 2 you will not get any grace marks\nYou have to give your exam again\n");
        }
        else
        {
            printf("You will get %d grace marks\n", sub * 4);
        }

        break;
    case 3:
        if (sub > 1)
        {
            printf("As you are fail in more than 1 subjects and have passed with class 3 you will not get any grace marks\nYou have to give your exam again\n");
        }
        else
        {
            printf("You will get 5 grace marks\n");
        }

        break;

    default:
    printf("Go and give your exam again nonsense\n");
        break;
    }
    return 0;
}
