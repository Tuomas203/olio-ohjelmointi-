#ifndef GAME_H
#define GAME_H

class Game
{

public:

    Game(int max)
    {
        maxNumber = max ;
    }

    ~Game()
    {

    }

    void play();


    int getRandomNumber() const;
    void setRandomNumber(int newRandomNumber);

    int getMaxNumber() const;

    int getPlayerGuess() const;
    void setPlayerGuess(int newPlayerGuess);

    int getNumOfGuesses() const;
    void setNumOfGuesses(int newNumOfGuesses);

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};

#endif // GAME_H
