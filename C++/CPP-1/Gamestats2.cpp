
// Game Stats 2.0
// Demonstrates arithmetic operations with variables

#include <iostream>
using namespace std;

int main()
{
    unsigned int score = 5000;
    cout << "Score:" << score << endl;

    //Altering the values of the variable

    score += 100;
    cout << "Score:" << score << endl;

    //Combined assignment operator

    score += 100;
    cout << "Score:" << score << endl;
    
    //Increment Operators

    int lives = 3;
    ++lives;
    cout << "lives:" << lives << endl;

    lives = 3;
    lives++;
    cout << "lives:" << lives << endl;

    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives,bonus = " << lives << " , " << bonus << endl;

    //Cþþ also defines the decrement operator, –. It works just like the increment operator, except it decrements a variable. It comes in the two flavors (prefix and postfix) as well.

    lives = 3;
    bonus = lives++ * 10;
    cout << "lives, bonus = " << lives << ", " << bonus << endl;

    //integer wrap around

    score = 4294967295;
    cout << '\nscore:' << score << endl;
    ++score; // Just like an odometer in a car, hits 0000000000.(exceeds max value)
    cout << "score:" << score << endl;

    return 0;

}
