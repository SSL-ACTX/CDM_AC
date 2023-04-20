#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

#define pr printf
#define sc scanf

  float rent, trans, groc, elec, water, med_exp, educ_exp, si, net;

int main()
{

    pr("ENTER YOUR RENT: ");
    sc("%i", &rent);

    pr("ENTER YOUR TRANSPORT: ");
    sc("%i", &trans);

    pr("ENTER YOUR GROCERIES: ");
    sc("%i", &groc);

    pr("ENTER YOUR ELECTRIC BILL: ");
    sc("%i", &elec);

    pr("ENTER YOUR WATER BILL: ");
    sc("%i", &water);

    pr("ENTER YOUR MEDICAL EXPENSES: ");
    sc("%i", &med_exp);

    pr("ENTER YOUR EDUCATIONAL EXPENSES: ");
    sc("%i", &educ_exp);

    pr("Your salary: ");
    sc("%i", &si);

    net = rent+trans+groc+elec+water+med_exp+educ_exp-si;

    system("cls");

    pr("NET INCOME\n");

    if(net>=0){
        system("color 2");
        pr("P%.2i");
    }
    if(net<0){
        system("color 4");
        pr("YOUR INCOME IS NOT ENOUGH BECAUSE YOU LACK !");
    }
    return 0;
}
