#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;

    // Display menu
    cout << "Choose a task to execute:" << endl;
    cout << "1. Check if a number is a palindrome." << endl;
    cout << "2. Find rectangles with a given area." << endl;
    cout << "3. Solve the equation x^2 + y^2 = k^2." << endl;

    // Input the user's choice
    cout << "Enter the task number (1-3): ";
    cin >> choice;

    // Perform the selected task
    switch (choice) {
    case 1: {
        int number;
        cout << "Enter a number: ";
        cin >> number;

        // Check if the number is a palindrome
        int originalNumber = number;
        int reversedNumber = 0;

        while (number > 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }

        if (originalNumber == reversedNumber)
            cout << originalNumber << " is a palindrome." << endl;
        else
            cout << originalNumber << " isn't a palindrome." << endl;

        break;
    }

    case 2: {
        int targetArea;
        cout << "Enter the target area: ";
        cin >> targetArea;

        // Find rectangles with the given area
        for (int length = 1; length <= targetArea; ++length) {
            if (targetArea % length == 0) {
                int width = targetArea / length;
                cout << "Rectangle: Length = " << length << ", Width = " << width << endl;
            }
        }

        break;
    }

    case 3: {
        // Solve the equation x^2 + y^2 = k^2 for natural numbers x, y, k in the range [1, 30]
        for (int x = 1; x <= 30; ++x) {
            for (int y = 1; y <= 30; ++y) {
                for (int k = 1; k <= 30; ++k) {
                    if (pow(x, 2) + pow(y, 2) == pow(k, 2)) {
                        cout << "Solution: x = " << x << ", y = " << y << ", k = " << k << endl;
                    }
                }
            }
        }

        break;
    }

    default:
        cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
    }

    return 0;
}

