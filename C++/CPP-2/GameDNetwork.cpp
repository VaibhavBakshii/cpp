// Designers Network
// Demonstrates logical operators

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    string password;
    bool success;

    cout << "Game Designer's Network\n\n";

    do
    {
        cout << "username";
        cin >> username;

        cout << "Password";
        cin >> password;

        if (username == "S.Meier" && password == "civilization")  //&& truth and falsity //and
        {
            cout << "\nHey, Sid.";
            success = true; 
        }
        else if (username == "S.Miyamoto" && password == "mariobros")
        {
            cout << "\nWhat’s up, Shigeru?";
            success = true; 
        }
        else if (username == "W.Wright" && password == "thesims")
        {
            cout << "\nHow goes it, Will?";
            success = true; 
        }
        else if (username == "guest" || password == "guest") //Or in C++
        {
            cout << "\nWelcome, guest.";
            success = true; 
        }
        else
        {
            cout << "\nYour login failed.";
            success = false;
        }
    } while (!success);
     return 0;






    
}