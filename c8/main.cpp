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
    bool gameWon = false;

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

        cout << endl << endl << "Used Letters: ";
        for (int i = 0; i < words.getUsedLetterVector().size(); i++) {
            cout << words.getUsedLetterVector()[i] << " ";
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
            words.setUsedLetter(guess);
            hangmanBodyPart++;
        }

        if (StringVector == HashedWordVector) {
            //cout << endl << "You guessed correctly!" << endl;
            gameWon = true;
            game.addToHangman(hangmanBodyPart);
            cout << endl << endl << endl << "Guess: ";
            for (int i = 0; i < words.returnWordLength(); i++) {
            cout << words.getStringVector()[i];
            }
            cout << endl << endl << "You guessed correctly!" << endl;

        }

        if (hangmanBodyPart == 7) {
            break;
        }

        guessCorrect = false;
    } while (!gameWon);

    if (hangmanBodyPart == 7) {
        game.addToHangman(7);
        cout << endl << "Game Over! You suck!! ";
        cout << "The word was ";
        for (int i = 0; i < words.returnWordLength(); i++) {
            cout << words.getStringVector()[i];
        }
    } else if (hangmanBodyPart != 7) {
        //cout << endl << "You guessed correctly!" << endl;

    }
    cout << endl;

    return 0;
}
