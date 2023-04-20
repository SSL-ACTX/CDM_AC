#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pr pr
#define sc sc

char color;
char NAME[50], ADDR[100], BDAY[100], EM[100], CZ[100], FN[100], MN[100];
char PRI[50], SEC[50], TER[50], FC[50], SC[50], TC[50];
int choice1, selection, ch, age1, AGE;
float rent, trans, groc, elec, water, med_exp, educ_exp, si, net;
float C, F;
float num1, num2, num3, sum, diff, prod, quo, result;
float quiz, assign, proj, cs, me, grade;
long long int c;


int main()
{
    pr("\n\n\n\n\n\n\n\n\n");
    pr("                       :::::::::Jaylene:::::::::::::::Francis:::::::::::::::::Jameel:::::::::\n");
    pr("                       ::'######:::'########:::'#######::'##::::'##:'########::::::'#######::\n");
    pr("                       :'##... ##:: ##.... ##:'##.... ##: ##:::: ##: ##.... ##::::'##.... ##:\n");
    pr("                       : ##:::..::: ##:::: ##: ##:::: ##: ##:::: ##: ##:::: ##:::: ##:::: ##:\n");
    pr("                       : ##::'####: ########:: ##:::: ##: ##:::: ##: ########:::::: #######::\n");
    pr("                       : ##::: ##:: ##.. ##::: ##:::: ##: ##:::: ##: ##.....::::::'##.... ##:\n");
    pr("                       : ##::: ##:: ##::. ##:: ##:::: ##: ##:::: ##: ##::::::::::: ##:::: ##:\n");
    pr("                       :. ######::: ##:::. ##:. #######::. #######:: ##:::::::::::. #######::\n");
    pr("                       ::......::::..:::::..:::.......::::.......:::..:::::::::::::.......:::\n");
    pr("                       ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    pr("                                            PRESS ANY KEY TO CONTINUE: ");
    sc("%c", &choice1);
    pr("\n\n\n\n\n\n\n\n\n\n");

system ("cls");
    do{
        pr("                                      =====================================\n\n");
        pr("                                                      Menu\n");
        pr("                                      =====================================\n\n\n");
        pr("[1] Fareinheit to Celcius\n[2] Fareinheit to Celcius\n[3] Family Expenses\n");
        pr("[4] Color Selector\n[5] Basic Calculator\n[6] Grade Computation\n[7] Your Information\n[8] Vote Qualification\n[0] Exit\n");
        pr("\n \n Enter your Choice: ");
        sc("%i", &selection);
        system("cls");
        switch(selection)
        {
        case 1:
                    pr("                                             =========================\n\n");
                    pr("                                             ======F-C Converter======\n");
                    pr("                                             =========================\n\n");
                    pr("Fahrenheit: ");
                    sc("%f", &F);

                    //Formula
                    C = (F - 32) * 5 / 9 ;
                    system("cls");

                    pr("                                             =========================\n\n");
                    pr("                                             ==========Result=========\n");
                    pr("                                             =========================\n\n");
                    
                    pr("%.2f Fahrenheit to %.2f Celsius", F, C);
                    
                    break;

     case 2:
                    pr("                                             =========================\n\n");
                    pr("                                             ======C-F Converter======\n");
                    pr("                                             =========================\n\n");
        
        pr("Celsius: ");
        sc("%f", &C);

        //Formula
        F=(C*9/5)+32;
        system("cls");

                    pr("                                             =========================\n\n");
                    pr("                                             ==========Result=========\n");
                    pr("                                             =========================\n\n");
        
        pr("%.2f Celsius to %.2f Fahrenheit", C, F);
        
        break;

        case 3:
                    pr("                                             =========================\n\n");
                    pr("                                             =====Family Expenses=====\n");
                    pr("                                             =========================\n\n");
        pr("Your salary: ");
        sc("%f", &si);

        pr("ENTER YOUR RENT: ");
        sc("%f", &rent);

        pr("ENTER YOUR TRANSPORT: ");
        sc("%f", &trans);

        pr("ENTER YOUR GROCERIES: ");
        sc("%f", &groc);

        pr("ENTER YOUR ELECTRIC BILL: ");
        sc("%f", &elec);

        pr("ENTER YOUR WATER BILL: ");
        sc("%f", &water);

        pr("ENTER YOUR MEDICAL EXPENSES: ");
        sc("%f", &med_exp);

        pr("ENTER YOUR EDUCATIONAL EXPENSES: ");
        sc("%f", &educ_exp);

        net =(si)-(rent+trans+groc+elec+water+med_exp+educ_exp);
        system("cls");

        pr("                                             =========================\n\n");
        pr("                                             =====Family Expenses=====\n");
        pr("                                             =========================\n\n");
        pr("NET INCOME: %.2f\n", net);

        if(net<0)
        {
            pr("YOUR INCOME IS NOT ENOUGH BECAUSE YOU LACK %.2f", net);
        }
            break;

        case 4:
                    pr("                                             =========================\n\n");
                    pr("                                             ======Color Selector=====\n");
                    pr("                                             =========================\n\n");
    pr("Enter the color: ");
    sc("%s", &color);

    if(color=='B' || color=='b')
    {
      pr("The color is Blue");
    }
    else if(color=='R' || color=='r')
    {
        pr("The color is Red");
    }
    else if(color=='G' || color=='g')
    {
        pr("The color is Green");
    }
    else if(color=='P' || color=='p')
    {
        pr("The color is Purple");
    }
    else if(color=='Y' || color=='y')
    {
        pr("The color is Yellow");
    }
    else
    {
        pr("Unknown color");
    }break;

        case 5:
                    pr("                                             =========================\n\n");
                    pr("                                             =====Basic Calculator====\n");
                    pr("                                             =========================\n\n");
            pr("Enter your First Number: ");
    sc("%f", &num1);

    pr("Enter your Second Number: ");
    sc("%f", &num2);

    pr("Enter your Third Number: ");
    sc("%f", &num3);

    sum = num1+num2+num3;
    diff = num3-num2;
    prod = num1*num3;
    quo = num1/num2;
    result = pow(num3,num2);

    system("cls");

    pr("The sum of %.2f, %.2f and %.2f is %.2f\n",num1, num2, num3, sum);
    pr("The difference of %.2f and %.2f is %.2f\n",num3, num2, diff);
    pr("The product of %.2f and %.2f is %.2f\n",num1, num3, prod);
    pr("The quotient of %.2f and %.2f is %.2f\n",num1, num2, quo);
    pr("The result of %.2f raise to %.2f is %.2f\n",num3, num2, result);
    break;

        case 6:
                    pr("                                             =========================\n\n");
                    pr("                                             ====Grade Computation====\n");
                    pr("                                             =========================\n\n");
            pr("Enter your Quiz Score: ");
    sc("%f", &quiz);

    pr("Enter your Assignment Score: ");
    sc("%f", &assign);

    pr("Enter your Class Standing Score: ");
    sc("%f", &cs);

    pr("Enter your Major Exam Score: ");
    sc("%f", &me);

    pr("Enter your Project Score: ");
    sc("%f", &proj);

    grade = (cs*.10)+(quiz*.15)+(assign*.15)+(proj*.20)+(me*.40);
    system("cls");

      pr("                                             =========================\n\n");
     pr("                                             ====Grade Computation====\n");
    pr("                                             =========================\n\n");
    pr("The Total grade of yours is :  %f \n", grade);

    if(grade>=75)
    {
        pr("*******CONGRATULATION YOU PASSED!***********");
    }

    if(grade<75)
    {
        pr("*************YOU FAILED*********************");
    } break;

        case 7:
                    pr("                                             =========================\n\n");
                    pr("                                             =====Your Information====\n");
                    pr("                                             =========================\n\n");
    pr("\nENTER YOUR NAME: ");
    sc(" %[^\n]", NAME);
    pr("ENTER YOUR AGE: ");
    sc("%d", &AGE);
    pr("ENTER YOUR BIRTHDAY: ");
    sc(" %[^\n]", BDAY);
    pr("ENTER YOUR ADDRESS: ");
    sc(" %[^\n]", ADDR);
    pr("ENTER YOUR CONTACT NUMBER: ");
    sc("%lld", &c);
    pr("ENTER YOUR EMAIL: ");
    sc(" %[^\n]", EM);
    pr("ENTER YOUR CITIZENSHIP: ");
    sc(" %[^\n]", CZ);
    pr("ENTER YOUR FATHER'S NAME: ");
    sc(" %[^\n]", FN);
    pr("ENTER YOUR MOTHER'S NAME: ");
    sc(" %[^\n]", MN);
    
    pr("------EDUCATIONAL ATTAINMENT------\n");
    
    pr("PRIMARY: ");
    sc(" %[^\n]", PRI);
    pr("SECONDARY: ");
    sc(" %[^\n]", SEC);
    pr("TERTIARY: ");
    sc(" %[^\n]", TER);
    
    pr("<----COURSE CHOICE----> \n");
    
    pr("ENTER YOUR FIRST CHOICE: ");
    sc(" %[^\n]", FC);
    pr("ENTER YOUR SECOND CHOICE: ");
    sc(" %[^\n]", SC);
    pr("ENTER YOUR THIRD CHOICE: ");
    sc(" %[^\n]", TC);

    system("cls");

                    pr("                                             =========================\n\n");
                    pr("                                             =====Your Information====\n");
                    pr("                                             =========================\n\n");
    pr("\nNAME: %s", NAME);
    pr("\nAGE: %d", AGE);
    pr("\nBIRTHDAY: %s", BDAY);
    pr("\nADDRESS: %s", ADDR);
    pr("\nCONTACT NUMBER: 0%lld", c);
    pr("\nEMAIL: %s", EM);
    pr("\nCITIZENSHIP: %s", CZ);
    pr("\nFATHER'S NAME: %s", FN);
    pr("\nMOTHER'S NAME: %s\n", MN);
    
    pr("------EDUCATIONAL ATTAINMENT------\n");
    
    pr("\nPRIMARY: %s", PRI);
    pr("\nSECONDARY: %s", SEC);
    pr("\nTERTIARY: %s\n", TER);
    
    pr("----------COURSE CHOICE-----------\n");
    
    pr("\nFIRST CHOICE: %s", FC);
    pr("\nSECOND CHOICE: %s", SC);
    pr("\nTHIRD CHOICE: %s", TC);
        break;
        case 8:
            pr("Enter your age: ");
    sc("%i", &age1);

    if(age1>=18){
        
        pr("Qualified to Vote!");
    }
    else {
        
        pr("Too Young!");
    }break;

        case 0:
            pr("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                             Thank you and Have a nice day!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        sc("%i", &choice1);
        exit(0);
        break;

        default:
        pr("Invalid Choice");break;
        }
        pr("\n\n\n\n[9]Go Back\n[0]Exit\n");
        pr("\n\nEnter your choice: ");
        sc("%i", &ch);
           system("cls");
    }while(ch==9);
    pr("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                            Thank you and Have a nice day!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    sc("%i", &choice1);
    exit(0);

    return 0;
} //INCOMPLETE!
