//Die Roller
//Demonstrates Random Numbers 

#include <iostream>
#include <cstdlib> //New File // Contains functions that generate random Numbers rand().
#include <ctime> // New File

using namespace std;

int main()
{
    srand(static_cast <unsigned int>(time(0))); //seed random number generator //Game programmers give the random number generator a number, called a seed, to determine the starting place in this sequence of pseudorandom numbers.
    int randomNumber = rand(); //Generates Random Number 

    int die = (randomNumber % 6) + 1; //Get Number between 1 and 6 
    cout << " You rolled a " << die << endl;

    return 0;



}