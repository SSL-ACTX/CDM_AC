#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int num;
char dw;

int main()
{
    do
    {
        system("cls");
        p("\n Enter Number : ");
        s("%i", &num);

        if(num >= 0)
        {
            p("\n The number is positive!");
        }
        else
        {
            p("\n The number is negative!");
        }

        p("\n\n Press Y to try again!: [Y/N]");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');


    return 0;
}