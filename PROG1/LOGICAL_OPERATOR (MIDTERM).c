//Logical Operator
#include <stdio.h>
#define p printf
#define s scanf

char dw;

int main()
{
    do
    {
        system("cls");
        int x = 10;
        int y = 10;
        int a = 20;
        int b = 21;

        if(x==y && a!=b)
        {
            p("x is less than y AND a is equal to b\n");
        }
        if(x==y || a==b)
        {
            p("x is less than y OR a is equal to b\n");
        }
        if(!(x==y && a==b))
        {
            p("NOT OPERATION\n");
        }
        if(!(x==y && a==b))
        {
            p("Make the EXPRESSION become TRUE \n");
        }

        p("\nCodes after IF!");

        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
