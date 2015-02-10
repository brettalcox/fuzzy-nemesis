#include <iostream>
#include <Hangman.h>
#include <File.h>
#include <string>

int main()
{
    cout << "HANGMAN" << endl;
    Hangman game;
    File words;
    string word;

    int hangmanBodyPart = 0;
    string guess;

    words.openFile();
    word = words.selectWord();
    vector<string> HashedWordVector = words.getHashedVector();

    do {
        game.addToHangman(hangmanBodyPart);
        cout << endl << endl << endl << "Guess: ";
        for (int i = 0; i < words.returnWordLength(); i++) {
            cout << HashedWordVector[i];
        }
        cout << endl << endl << ": ";
        cin >> guess;

    } while (hangmanBodyPart != 7);

    return 0;
}
