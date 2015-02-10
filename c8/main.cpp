#include <iostream>
#include <Hangman.h>
#include <File.h>
#include <Word.h>
#include <string>

int main()
{
    cout << "HANGMAN" << endl;

    Hangman game;
    Word words;
    File wordsFile;

    string word;
    int hangmanBodyPart = 0;
    string guess;
    bool guessCorrect = false;

    wordsFile.openFile();
    words.setWordArray(wordsFile.getWordArray());

    word = words.selectWord();
    vector<string> HashedWordVector = words.getHashedVector();
    vector<string> StringVector = words.getStringVector();

    do {
        game.addToHangman(hangmanBodyPart);
        cout << endl << endl << endl << "Guess: ";
        for (int i = 0; i < words.returnWordLength(); i++) {
            cout << HashedWordVector[i];
        }
        cout << endl << endl << ": ";
        getline(cin, guess);

        for (int i = 0; i < words.returnWordLength(); i++) {
            if (guess == StringVector[i]) {
                HashedWordVector[i] = StringVector[i];
                guessCorrect = true;
            } else;
        }

        if (!guessCorrect) {
            hangmanBodyPart++;
        }
        guessCorrect = false;
    } while (hangmanBodyPart != 7);

    game.addToHangman(7);
    cout << endl << "Game Over! You suck!!" << endl;

    return 0;
}
