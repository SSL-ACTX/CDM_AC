#include <stdio.h>
#define p printf
#define s scanf

int n, i, j;
char dw;

int main()
{
    do
    {
        system("cls");
        p("\t\t           FOR LOOP INVERTED TRIANGLE\n\n");;
        p("\tEnter the Number of Row(s): ");
        s("%i", &n);

        p("\n");

        for(i = n; i >= 0; --i)
        {
            p("\t\t              ");
            for(j = 1; j <= n - i; ++j)
            {
                p(" ");
            }
            for(j = 1; j <= i; ++j)
            {
                p("* ");
            }
            p("\n");
        }
        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
