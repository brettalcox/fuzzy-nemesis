#include <iostream>
using namespace std;

int main() {

    unsigned short years;
    unsigned short months;
    unsigned short days;

    cout << "How many years old are you?: ";
    cin >> years;
    cout << years << " years and how many months?: ";
    cin >> months;
    cout << years << " years, " << months << " months, and how many days?: ";
    cin >> days;

    return 0;
}
