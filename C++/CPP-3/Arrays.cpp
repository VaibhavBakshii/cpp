//That means you can use an array to store a sequence of integers for, say, a high-score list. But it also means that you can use arrays to store elements of programmer-defined types, such as a sequence of items that an RPG character might carry.
//Hero's inventory

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_ITEMS = 10;
    string inventory [MAX_ITEMS];

    int numItems = 0;
    inventory[numItems++] = "sword";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "sheild";

    cout << "Your items:\n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl;

    }
    
    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "\nThe item name ’" << inventory[0] << "’ has "; 
    cout << inventory[0].size() << " letters in it.\n";

    cout << "\nYou find a healing potion."; 
    if (numItems < MAX_ITEMS)
    {
        inventory[numItems++] = "healing potion";
    }
    else
    {
        cout << "You have too many items and can’t carry another.";
    }
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl; //bounds checking. Testing to make sure that an index number is a valid array position before using
    }

    return 0;


}
