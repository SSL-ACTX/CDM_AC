/* TUTUNGAN, JAMEEL U.
   BSIT 1E
   PROG2 - BASIC CALCULATOR
*/
#include <iostream>
using namespace std;

int fnum, snum, sum, diff, prod, quo;

int main()
{
    cout << "\n\t=== Basic Calculator ===\n" << endl;
    cout << "\tFirst Number: ";
    cin >> fnum;
    cout << "\tSecond Number: ";
    cin >> snum;
    //Formula
    sum = (fnum + snum);
    diff = (fnum - snum);
    prod = (fnum * snum);
    quo = (fnum / snum);
    //Output
    cout << "\n\t=== Results ===\n" << endl;
    cout << "\tThe Sum of " << fnum << " and " << snum << " is " << sum << endl;
    cout << "\tThe Difference of " << fnum << " and " << snum << " is " << diff << endl;
    cout << "\tThe Product of " << fnum << " and " << snum << " is " << prod << endl;
    cout << "\tThe Quotient of " << fnum << " and " << snum << " is " << quo << endl;

    return 0;
}
