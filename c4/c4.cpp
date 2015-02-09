#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    int lengthOfString;
    string * encryptArray;

    int startSlice = 0;
    int endSlice = 1;

    cout << "Please enter a string..." << endl << endl << ": ";
    getline(cin, inputString);
    lengthOfString = inputString.length();
    lengthOfString = (lengthOfString / 2) + 1;
    encryptArray = new string[lengthOfString];
    //string butt = "fart";
    //encryptArray[0] = butt;
    //cout << encryptArray[0];

    for (int i = lengthOfString - 1; i > 0; i--) {
        encryptArray[i] = inputString.substr(1, 2);
        startSlice += 2;
        endSlice += 2;
    }

    for (int i = 0; i > lengthOfString; i++) {
        cout << encryptArray[i];
    }

    return 0;
}
