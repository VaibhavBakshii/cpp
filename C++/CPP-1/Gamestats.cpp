//GameStats
//Demonstrates declaring and issuing variables 

#include <iostream>
using namespace std;

int main()
{
    int score;
    double distance;
    char PlayAgain;
    bool shieldsup;

    short lives, AliensKilled;

    score = 0;
    distance = 1200.76;
    PlayAgain = 'y';
    shieldsup = true;
    lives = 3;
    AliensKilled = 10;

    double engineTemp = 6572.58;

    cout << "\nscore:"  << score << endl;
    cout << "distance:" << distance << endl;
    cout << "PlayAgain:" << PlayAgain << endl;
    cout << "lives:" << lives << endl;
    cout << "alienskilled:" << AliensKilled << endl;
    cout << "engineTemp:" << engineTemp << endl;

    int fuel;
    cout <<"\n How much fuel?";
    cin >> fuel;
    cout << "fuel:" << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;
    return 0;


}