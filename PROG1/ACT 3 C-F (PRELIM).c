#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

float C, F;
char dw;

int main()
{

    do
    {
        system("cls");
        p(" <---- C-F Converter ---->\n");
        p("\n");
        p("Celsius: ");
        s("%f", &C);

        //Formula
        F=(C*9/5)+32;

        system("cls");

        p(" <-----Results----->\n");
        p("\n");
        p("%.2f Celsius to %.2f Fahrenheit", C, F);
        p("\n");

        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
