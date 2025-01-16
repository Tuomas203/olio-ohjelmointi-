#include "game.h"

#include <iostream>

#include <cstdlib>
#include <ctime>

using namespace std;



void Game::play()
{
    int guess;

    srand(time(NULL));
    setRandomNumber(rand() %  getMaxNumber());

    setNumOfGuesses(0);

    while(getRandomNumber() != getPlayerGuess())
    {
        setNumOfGuesses(getNumOfGuesses()+1);
        cout << " Give your guess between 1-" << getMaxNumber() << endl;
        cin >> guess;
        setPlayerGuess(guess);

        if(getRandomNumber() == getPlayerGuess())
        {
            printGameResult();
        }

        else if(getRandomNumber() < getPlayerGuess())
        {
            cout << "Your guess is too big " << endl;
        }

        else if(getRandomNumber() > getPlayerGuess())
        {
            cout << "Your guess is too small" << endl;
        }

    }



}

int Game::getRandomNumber() const
{
    return randomNumber;
}

void Game::setRandomNumber(int newRandomNumber)
{
    randomNumber = newRandomNumber;
}


int Game::getMaxNumber() const
{
    return maxNumber;
}



int Game::getPlayerGuess() const
{
    return playerGuess;
}

void Game::setPlayerGuess(int newPlayerGuess)
{
    playerGuess = newPlayerGuess;
}

int Game::getNumOfGuesses() const
{
    return numOfGuesses;
}

void Game::setNumOfGuesses(int newNumOfGuesses)
{
    numOfGuesses = newNumOfGuesses;
}

/*printGameResult*/

void Game::printGameResult()
{
    cout << "Your answer was correct"<< endl;
    cout << "The number was: " << getRandomNumber() << endl;
    cout << "The number of guesses: " << getNumOfGuesses() << endl;
}
