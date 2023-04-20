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
        p("\n First letter of a color: ");
        s("%s", &color);

        if(color=='R'||color=='r')
        {
            p("\n It's color Red!");
        }
        else if(color=='O'||color=='o')
        {
            p("\n It's color Orange!");
        }
        else if(color=='Y'||color=='y')
        {
            p("\n It's color Yellow!");
        }
        else if(color=='G'||color=='g')
        {
            p("\n It's color Green!");
        }
        else if(color=='B'||color=='b')
        {
            p("\n It's color Blue!");
        }
        else if(color=='I'||color=='i')
        {
            p("\n It's color Indigo!");
        }
        else if(color=='V'||color=='v')
        {
            p("\n It's color Violet!");
        }
        else
        {
            p("\n Unknown Color!");
        }

        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
