#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define p printf
#define s scanf

float qz, asg, proj, cs, me, grade;
char dw;

int main()
{
    do
    {
        system("cls");
        p("\n Quiz: ");
        s("%f", &qz);
        p("\n Assignment: ");
        s("%f", &asg);
        p("\n Project: ");
        s("%f", &proj);
        p("\n Class Standing: ");
        s("%f", &cs);
        p("\n Major Exam: ");
        s("%f", &me);

        grade=(cs*.10)+(qz*.15)+(asg*.15)+(proj*.20)+(me*.40); // Formula

        system("cls");

        p("\n Grade: %.2f", grade);

        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');
	
    return 0;
}
