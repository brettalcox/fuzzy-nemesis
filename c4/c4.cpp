#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    int lengthOfString;
    char * length;

    cout << "Please enter a string..." << endl << endl << ": ";
    getline(cin, inputString);
    lengthOfString = inputString.length();
    length = new char[lengthOfString];

    for (int i = lengthOfString; i > 0; i--) {

    }

    cout << inputString;

    return 0;
}
