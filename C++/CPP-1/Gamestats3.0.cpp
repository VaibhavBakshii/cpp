//Gamestats 3.0
//Demonstrating constants 

#include <iostream>
using namespace std;

int main()
{
    const int ALIEN_POINTS = 150;
    int aliensKilled = 10;
    int score = aliensKilled * ALIEN_POINTS;
    cout << "Score:" << score << endl; //Printed Points by mutiplying the aliens killed by the score to kill an alien
    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE}; //An enumeration is a set of unsigned int constants, called enumerators. 
    difficulty myDifficulty = EASY; //By default, the value of enumerators begins at zero and increases by one. So NOVICE is 0, EASY is 1, NORMAL is 2, HARD is 3, and UNBEATABLE is 4.
    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50}; 
    shipCost myShipCost = BOMBER_COST;
    cout << "\nTo upgrade my ship to a Cruiser will cost "
       << (CRUISER_COST - myShipCost) << " Resource Points.\n";
return 0; 

}