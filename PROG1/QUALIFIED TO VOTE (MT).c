#include <stdio.h>
#include <stdlib.h>

int age;
char dw;

int main()
{

    do
    {
        system("cls");
        printf(" --- Qualified to Vote! ---\n\n");
        printf("     Enter your age: ");
        scanf("%d", &age);

        if(age>=18)
        {
            printf("     Qualified to Vote!\n\n");
        }
        else
        {
            printf("     Not Qualified to Vote!\n\n");
        }

        printf("       Press Y to try again!: [Y/N]");
        scanf("%s", &dw);
    } while(dw=='Y'||dw=='y');

    return 0;
}
