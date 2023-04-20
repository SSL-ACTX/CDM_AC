#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int x, y;
char dw;

int main()
{
    do
    {
        system("cls");
        p("\n Value of X: ");
        s("%i", &x);
        p("\n Value of Y: ");
        s("%i", &y);

        if (x > y)
        {
            printf("\n The highest value is X with the value of: %i \n", x);
        }
        else if (x < y)
        {
            printf("\n The highest value is Y with the value of: %i \n", y);
        }
        else if (x == y)
        {
            printf("\n The value of X and Y are the same, the value is: %i \n", x);
        }

        p("\n\n Press Y to try again!: [Y/N]");
        s("%s", &dw);

    } while(dw=='y'||dw=='Y');

    return 0;
}
