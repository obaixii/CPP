#include <iostream>
using namespace std;

int main()
{
    ///// User Input

    // We have already learned that cout is used to output (print) values. Now we will use cin to get user input.
    cout << "Lesson 6: User Input" << endl;

    // cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

    int a;
    cout << "Type a number: ";       // Type a number and press enter
    cin >> a;                        // Get user input from the keyboard
    cout << "Your number is: " << a; // Display the input value

    /// cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)

    /// cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

    /// Creating a Simple Calculator

    int x, y;
    int sum;

    cout << "Type a number: ";
    cin >> x;

    cout << "Type another number: ";
    cin >> y;

    sum = x + y;
    cout << "The sum of " << x << " and " << y << " is " << sum << endl;
}