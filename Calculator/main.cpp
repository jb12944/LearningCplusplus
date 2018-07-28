#include <iostream>

using namespace std;

void addition()
{
    cout << "Enter the first value you wish to add: "; //Prompts user to enter first value
    int x; //Defines the variable for the first value
    cin >> x; //Assigns the first user input value to the integer x
    cout << "Enter the second value you wish to add: "; //Prompts user to enter the second value
    int y; //Defines the variable for the second value
    cin >> y; //Assigns the second user input value to the integer y
    cout << "Sum = " << x + y << endl; //Displays the sum of the two values
}

void subtraction()
{
    cout << "Enter the first value you wish to subtract: "; //Prompts user to enter first value
    int x; //Defines the variable for the first value
    cin >> x; //Assigns the first user input value to the integer x
    cout << "Enter the second value you wish to subtract: "; //Prompts user to enter the second value
    int y; //Defines the variable for the second value
    cin >> y; //Assigns the second user input value to the integer y
    cout << "Difference = " << x - y << endl; //Displays the difference of the two values
}

void multiplication()
{
    cout << "Enter the first value you wish to multiply: "; //Prompts user to enter first value
    int x; //Defines the variable for the first value
    cin >> x; //Assigns the first user input value to the integer x
    cout << "Enter the second value you wish to Multiply: "; //Prompts user to enter the second value
    int y; //Defines the variable for the second value
    cin >> y; //Assigns the second user input value to the integer y
    cout << "Product = " << x * y << endl; //Displays the product of the two values
}

void division()
{
    cout << "Enter the first value you wish to divide: "; //Prompts user to enter first value
    int x; //Defines the variable for the first value
    cin >> x; //Assigns the first user input value to the integer x
    cout << "Enter the second value you wish to divide: "; //Prompts user to enter the second value
    int y; //Defines the variable for the second value
    cin >> y; //Assigns the second user input value to the integer y
    cout << "Quotient = " << x + y << endl; //Displays the quotient of the two values
}

int main()
{
    bool restart = false;
    do
    {
        cout << "Calculator v1.0" << endl; //Displays name of program
        cout << "Choose which operation you want to do: " << endl; //Presents user with options for operations
        cout << "1 - Addition" << endl;
        cout << "2 - Subtraction" << endl;
        cout << "3 - Multiplication" << endl;
        cout << "4 - Division" << endl;
        int z;
        cin >> z;
        if (z == 1)
            addition();
        else if (z == 2)
            subtraction();
        else if (z == 3)
            multiplication();
        else if (z == 4)
            division();
        else if ((z <= 0)||(z >= 5))
            cout << "Invalid Selection" << endl;
            restart = true;
    }
    while (restart);
    return 0;
}
