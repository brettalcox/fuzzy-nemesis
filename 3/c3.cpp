#include <iostream>
using namespace std;

int main() {

    unsigned short years;
    unsigned short months;
    unsigned short days;
    int seconds;

    int yearsSeconds;
    int monthsSeconds;
    int daysSeconds;

    cout << "How many years old are you?: ";
    cin >> years;
    cout << years << " years and how many months?: ";
    cin >> months;
    cout << years << " years, " << months << " months, and how many days?: ";
    cin >> days;

    yearsSeconds = ((((years * 365) * 24) * 60) * 60);
    monthsSeconds = ((((months * 30) * 24) * 60) * 60);
    daysSeconds = (((days * 24) * 60) * 60);
    seconds = yearsSeconds + monthsSeconds + daysSeconds;

    cout << "You are " << seconds << " seconds old!" << endl;

    return 0;
}
