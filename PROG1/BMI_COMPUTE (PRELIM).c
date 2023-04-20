#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf

   float weight, height, bmi;
   char dw;

int main()
{
    do {
	system("cls");
	p("Enter the Weight: ");
	s("%f", &weight);
	p("Enter the Height: ");
	s("%f", &height);

	bmi=weight/(height*height);

	system("cls");

	p("Your BMI is: %.2f", bmi);

		if(bmi < 18.5)
			{
				p(" Your BMI Classification is Underweight\n");
			}
		else if(bmi > 18.6 && bmi < 24.9)
			{
				p(" Your BMI Classification is Normal\n");
			}
		else if(bmi > 25 && bmi < 29.9)
			{
				p(" Your BMI Classification is Overweight\n");
			}
		else if(bmi < 30)
			{
				p(" Your BMI Classification is Obese\n");
			}
		else if(bmi > 30.1 && bmi < 40)
			{
				p(" Your BMI Classification is Obese I\n");
			}
		else if(bmi > 40.1 && bmi < 50)
			{
				p(" Your BMI Classification is Obese II\n");
			}
		else if(bmi > 50)
			{
				p(" Your BMI Classification is Obese III\n");
			}
		else
			{
				p(" Wrong Entry\n");
			}

	  p("\n\n Press Y to try again!: [Y/N]");
	  s("%s", &dw);		
	} while(dw=='y'||dw=='Y');

return 0;
}
