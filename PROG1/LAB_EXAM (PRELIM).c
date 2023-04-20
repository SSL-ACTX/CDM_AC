#include <stdio.h>
#include <stdlib.h>

#define p printf
#define s scanf

float num1, num2, num3;
float sum, dif, prod, quo, rs;
char dw;

int main()
{
    do
    {
        system("cls");
        p("Number [1] : ");
        s("%f", &num1);
        p("Number [2] : ");
        s("%f", &num2);
        p("Number [3] : ");
        s("%f", &num3);

        //formulas
        sum = num1+num2+num3;
        dif = num3-num2;
        prod = num1*num3;
        quo = num1/num2;
        rs = pow(num3,num2);

        system("cls");

        p("| Sum        = %.2f \n", sum);
        p("| Difference = %.2f \n", dif);
        p("| Product    = %.2f \n", prod);
        p("| Quotient   = %.2f \n", quo);
        p("| Raise      = %.2f \n", rs);

        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
