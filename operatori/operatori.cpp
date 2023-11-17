#include <iostream>
using namespace std;

int main()
{
    int number;

    // Input a number in the range from 0 to 5
    cout << "Enter a number from 0 to 5: ";
    cin >> number;

    // Using switch statement 
    switch (number) {
    case 0:
        cout << "Zero" << endl;
        break;
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    default:
        cout << "Number is out of range." << endl;
    }

    // Using if statement
    cout << "Enter a number from 0 to 5: ";
    cin >> number;

    if (number >= 0 && number <= 5) {
        if (number == 0)
            cout << "Zero" << endl;
        else if (number == 1)
            cout << "One" << endl;
        else if (number == 2)
            cout << "Two" << endl;
        else if (number == 3)
            cout << "Three" << endl;
        else if (number == 4)
            cout << "Four" << endl;
        else if (number == 5)
            cout << "Five" << endl;
    }
    else {
        cout <<  "Number is out of range." << endl;
    }

    return 0;
}
