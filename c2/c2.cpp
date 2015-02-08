#include <iostream>
using namespace std;

int main() {

    unsigned short choice;
    short fahrenheit;
    short celsius;

    cout << "What would you like to do?" << endl << endl;
    cout << "1. Fahrenheit to Celsius" << endl << "2. Celsius to Fahrenheit" << endl;
    cout << endl << ": ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the temperature to convert (in Fahrenheit): ";
            cin >> fahrenheit;
            fahrenheit -= 32;
            fahrenheit *= 5;
            fahrenheit /= 9;
            cout << endl << "That is " << fahrenheit << " degress in Celsius" << endl;
            break;
        case 2:
            cout << "Enter the temperature to convert (in Celsius): ";
            cin >> celsius;
            celsius *= 9;
            celsius /= 5;
            celsius += 32;
            cout << endl << "That is " << celsius << " degress in Fahrenheit" << endl;
            break;
    }
    return 0;
}
