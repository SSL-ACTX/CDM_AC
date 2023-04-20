#include <stdio.h>
#define p printf
#define s scanf

char NAME[50], ADDR[100], BDAY[100], EM[100], CZ[100], FN[100], MN[100];
char PRI[50], SEC[50], TER[50], FC[50], SC[50], TC[50], dw;
int AGE;
long long int c;

int main()
{
    do
    {
        system("cls");
        p("--------------PROFILE-------------\n");
        p("\nENTER YOUR NAME: ");
        s(" %[^\n]", NAME);
        p("ENTER YOUR AGE: ");
        s("%d", &AGE);
        p("ENTER YOUR BIRTHDAY: ");
        s(" %[^\n]", BDAY);
        p("ENTER YOUR ADDRESS: ");
        s(" %[^\n]", ADDR);
        p("ENTER YOUR CONTACT NUMBER: ");
        s("%lld", &c);
        p("ENTER YOUR EMAIL: ");
        s(" %s", EM);
        p("ENTER YOUR CITIZENSHIP: ");
        s(" %[^\n]", CZ);
        p("ENTER YOUR FATHER'S NAME: ");
        s(" %[^\n]", FN);
        p("ENTER YOUR MOTHER'S NAME: ");
        s(" %[^\n]", MN);
        p("\n");
        p("------EDUCATIONAL ATTAINMENT------\n");
        p("\n");
        p("PRIMARY: ");
        s(" %[^\n]", PRI);
        p("SECONDARY: ");
        s(" %[^\n]", SEC);
        p("TERTIARY: ");
        s(" %[^\n]", TER);
        p("\n");
        p("<----COURSE CHOICE----> \n");
        p("\n");
        p("ENTER YOUR FIRST CHOICE: ");
        s(" %[^\n]", FC);
        p("ENTER YOUR SECOND CHOICE: ");
        s(" %[^\n]", SC);
        p("ENTER YOUR THIRD CHOICE: ");
        s(" %[^\n]", TC);

        system("cls");
        p("-------------PROFILE-------------\n");
        p("\nNAME: %s", NAME);
        p("\nAGE: %d", AGE);
        p("\nBIRTHDAY: %s", BDAY);
        p("\nADDRESS: %s", ADDR);
        p("\nCONTACT NUMBER: 0%lld", c);
        p("\nEMAIL: %s", EM);
        p("\nCITIZENSHIP: %s", CZ);
        p("\nFATHER'S NAME: %s", FN);
        p("\nMOTHER'S NAME: %s\n", MN);
        p("\n");
        p("------EDUCATIONAL ATTAINMENT------\n");
        p("\n");
        p("\nPRIMARY: %s", PRI);
        p("\nSECONDARY: %s", SEC);
        p("\nTERTIARY: %s\n", TER);
        p("\n");
        p("----------COURSE CHOICE-----------\n");
        p("\n");
        p("\nFIRST CHOICE: %s", FC);
        p("\nSECOND CHOICE: %s", SC);
        p("\nTHIRD CHOICE: %s", TC);

        p("\n\n Press Y to try again!: [Y/N]\n");
        s("%s", &dw);
    } while(dw=='y'||dw=='Y');

    return 0;
}
