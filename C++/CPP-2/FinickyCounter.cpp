// Finicky Counter
// Demonstrates break and continue statements

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    while (true) //Technically, this creates an infinite loop.
    {
        count += 1;
        
        //for ending the loop uses if statement 
        if (count > 10)
        {
            break;
        }

        //skipping the number 5

        if (count == 5) //continue statement means “jump back to the top of the loop.”
        {
            continue;

        }

        cout << count << endl; //an exit condition in the loop body.


    } 

    return 0;

}