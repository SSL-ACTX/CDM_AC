#include <stdio.h>
#define p printf
#define s scanf

int st, en;
char dw;

int main()
{
    do
    {
        system("cls");
        p("\n Enter starting value: ");
        s("%d", & st);
        p("\n Enter ending value: ");
        s("%d", & en);
        system("cls");
        p("\n\n Starting value:  %d   Ending Value:  %d \n\n", st, en);
        for (st; en <= st; st--)
        {
            p(" %d\n", st);
        }
        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
