#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    int lengthOfString;
    string encryptArray[1000];

    int startSlice = 0;
    int endSlice = 2;

    cout << "Please enter a string..." << endl << endl << ": ";
    getline(cin, inputString);
    lengthOfString = inputString.length();
    lengthOfString = (lengthOfString / 2) + 1;

    for (int i = lengthOfString; i > 0; i--) {
        encryptArray[i] = inputString.substr(startSlice, endSlice);
        startSlice += 2;
    }

    for (int i = 0; i < lengthOfString + 1; i++) {
        cout << encryptArray[i];
    }

    return 0;
}
