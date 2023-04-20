#include <stdio.h>
#include <stdlib.h>

#define p printf
#define s scanf

float F, C;
char dw;

int main()
{
    do
    {
        system("cls");
        // Temperature in Celsius //
        p("\n Enter temperature in Fahrenheit: ");
        s("%f", &F);

        // Formula //
        C= (F-32)*5/9;
        // Result //
        p(" %.1f Fahrenheit = %.1f Celsius", F, C);

        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
