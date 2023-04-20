#include <stdio.h>

char dw;
int rows, i, j;

int main()
{
    do
    {
        system("cls");
        printf("Enter the number of rows: ");
        scanf("%d", &rows);

        for (i = i; i <= rows; i++)
        {
            for (j = i; j<= rows - i; j++)
            {
                printf(" ");
            }

            for (j = i; j <= i; j++)
            {
                printf("* ");
            }

            printf("\n");
        }
        printf("\n\n Press Y to try again!: [Y/N]\n");
        scanf("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
