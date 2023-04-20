#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

float b, h, area;
char dw;

int main()
{
    do
    {
        system("cls");
        p("\n Area of Triangle \n\n");
        p(" Base = ");
        s("%f", &b);
        p(" Height = ");
        s("%f", &h);
		
        system("cls");
        area = (b*h)/2;

        p("\n\nTotal Area = %.2f", area);

        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
