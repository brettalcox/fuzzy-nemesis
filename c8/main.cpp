#include <iostream>
#include <Hangman.h>
#include <File.h>
#include <string>

int main()
{
    Hangman game;
    File words;
    string word;

    game.createHangman();
    words.openFile();
    word = words.selectWord();
    vector<string> HashedWordVector = words.getHashedVector();
    cout << endl << endl << endl;
    for (int i = 0; i < words.returnWordLength(); i++) {
        cout << HashedWordVector[i];
    }



    return 0;
}
