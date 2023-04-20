#include <stdio.h>

int i, n, j;
char dw;

int main()
{

    do
    {
        system("cls");
        printf("\n Enter the number of row : ");
        scanf("%i", &n);

        printf("\n");

        for(i = 1; i <= n; i++)
        {
            printf("\t          ");

            for(j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
            for(j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        printf("\n\n Press Y to try again!: [Y/N]");
        scanf("%s", &dw);
    } while(dw=='Y'||dw=='y');

    return 0;
}
