//GuessMyNumber
//The Classic Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); //seed random number generator

    int secretNumber = rand () % 100 + 1;
    int tries = 0;
    int guess;

    cout << "Welcome to guess the number game\n\n";
    
    do
    {
        cout << "Enter a guess";
        cin >> guess;
        ++tries;

        if (guess > secretNumber)
        {
            cout << "The Number is too high! Try Again\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "The Number is too low! Try Again\n\n";
        }
        else
        {
            cout << "\nThat’s it! You got it in " << tries << " guesses!\n"; 
        }
        

    } while (guess != secretNumber);

    return 0;
    
}

