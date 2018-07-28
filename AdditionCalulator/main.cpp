#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the first value you wish to add: "; //Prompts user to enter first value
    int x; //Defines the variable for the first value
    cin >> x; //Assigns the first user input value to the integer x
    cout << "Enter the second value you wish to add: "; //Prompts user to enter the second value
    int y; //Defines the variable for the second value
    cin >> y; //Assigns the second user input value to the integer y
    cout << "Sum = " << x + y << endl; //Displays the sum of the two values
    return 0;
}
