#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

char color, dw;

int main()
{
    do
    {
        system("cls");
        p("\n Enter Color: ");
        s("%s", &color);

        switch(color)
        {
        case 'R': case 'r':
            p("\n Red");
            break;
        case 'O': case 'o':
            p("\n Orange");
            break;
        case 'Y': case 'y':
            p("\n Yellow");
            break;
        case 'G': case 'g':
            p("\n Green");
            break;
        default:
            p("\n Unknown Color!");
        }

        p("\n\n Press Y to try again!: [Y/N]");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
