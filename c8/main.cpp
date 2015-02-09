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

    cout << word << endl;

    return 0;
}
