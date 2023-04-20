#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

    float ass1, ass2, seatwork1, seatwork2, seatwork3, quiz1, quiz2, quiz3, exam, grade;
	char dw;

int main()
{
    do {
    p("Enter the score of your Assigntment : ");
	s("%f", &ass1);
    p("Enter the score of your Assigntment : ");
	s("%f", &ass2);
    p("Enter the score of your Seat Work : ");
	s("%f", &seatwork1);
    p("Enter the score of your Seat Work : ");
	s("%f", &seatwork2);
    p("Enter the score of your Seat Work : ");
	s("%f", &seatwork3);
    p("Enter the score of your Quiz : ");
	s("%f", &quiz1);
    p("Enter the score of your Quiz : ");
	s("%f", &quiz2);
    p("Enter the score of your Quiz : ");
	s("%f", &quiz3);
    p("Enter the score of your Exam : ");
	s("%f", &exam);

    grade = ((ass1 + ass2) / 2 * .10) + ((seatwork1 + seatwork2 + seatwork3) / 3 * .20) + ((quiz1 + quiz2 + quiz3) / 3 * .30) + (exam * .40);

    p("\n Your Grade is %g \n", grade);
	
	p("\n\n Press Y to try again!: [Y/N]");
	s("%s", &dw);
    } while (dw=='y'||dw=='Y');
	
    return 0;
}