#include <iostream>
using namespace std;

int main() {

    int grade[3];
    cout << "\n\tPrelim Grade: ";
    cin >> grade[0];
    cout << "\n\tMidterm Grade: ";
    cin >> grade[1];
    cout << "\n\tFinal Grade: ";
    cin >> grade[2];
    cout << "Final Grade is: " << (grade[0]+grade[1]+grade[2])/3;

    return 0;
}
