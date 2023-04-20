#include <stdio.h>

    float grade;
	char dw;

int main()
{
	do {
	system("cls");
    printf("\n Enter your grade: ");
	scanf("%d", &grade);

    if(grade >- 90 && grade <= 100)
    {
        printf(" Grade: A\n");
    }
    else if(grade >= 80 && grade < 90)
    {
        printf(" Grade: B\n");
    }
    else if(grade >= 70 && grade < 80)
    {
        printf(" Grade: C\n");
    }
    else if(grade >= 60 && grade < 70)
    {
        printf(" Grade: D\n");
    }
    else if(grade >= 0 && grade < 60)
    {
        printf(" Grade: E\n");
    }
    else
    {
        printf(" Out of range\n");
    }
	
	printf("\n\n Press Y to try again!");
	scanf("%s", &dw);
	} while(dw=='y'||dw=='Y');
	
    return 0;
}