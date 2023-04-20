//Relational Operator
#include <stdio.h>
#define p printf
#define s scanf

char dw;

int main()
{
    do
    {
        system("cls");
        int x = 15;
        int y = 10;

        if(x==y)
        {
            printf("Both variables are equal\n");
        }

        if(x>y)
        {
            printf("x is greater than y\n");
        }

        if(x<y)
        {
            printf("x is less than y\n");
        }

        if(x!=y)
        {
            printf("x is not equal to y\n");
        }

        if(x<=y)
        {
            printf("x is lesser or equal to y\n");
        }

        if(x>=y)
        {
            printf("x is greater or equal to y\n");
        }

        printf("Codes after IF!");
        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
