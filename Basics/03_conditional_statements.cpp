#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "Conditional Statement in C++" << endl;
    // Asks for user their name
    cout << "Enter your name : ";
    cin >> name;

    // Let's make an condition that if name is equals to myname and then it will print hello sir
    if (name == "Vivek")
    {
        cout << "Hello Sir";
    }
    else
    {
        cout << "I don't know you, bye";
    }

    return 0;
}