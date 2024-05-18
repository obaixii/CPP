#include <iostream>
using namespace std;

// C++ Variables - Variables are containers for storing data values.

int main()
{
    // In C++, there are different types of variables (defined with different keywords), for example:

    ///// Syntax - type variableName = value;
    int myNum = 15;
    cout << myNum << endl;

    // Note that if you assign a new value to an existing variable, it will overwrite the previous value:
    myNum = 10;            // Now myNum is 10
    cout << myNum << endl; // Outputs 10

    int myNum2 = 5;           // Integer (whole number without decimals)
    double myFloatNum = 5.99; // Floating point number (with decimals)
    char myLetter = 'D';      // Character
    string myText = "Hello";  // String (text)
    bool myBoolean = true;    // Boolean (true or false)

    cout << myNum2 << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    ///// Display Variables
    // The cout object is used together with the << operator to display variables. To combine both text and a variable, separate them with the << operator:

    int myAge = 35;
    cout << "I am " << myAge << " years old." << endl;

    ///// Add Variables Together

    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;

    ///// Declare Many/Multiple Variables

    int a = 5, b = 6, c = 50;
    cout << a + b + c << endl;

    // One Value to Multiple Variables
    int k, j, i;
    k = j = i = 50;
    cout << k + j + i << endl;

    ///// C++ Identifiers

    // All C++ variables must be identified with unique names. These unique names are called identifiers.

    // OK, but not so easy to understand what m actually is
    int m = 60;

    // Better and more understandable
    int minutesPerHour = 60;

    // The general rules for naming variables are:

    /*
     - Names can contain letters, digits and underscores
     - Names must begin with a letter or an underscore (_)
     - Names are case-sensitive (myVar and myVar are different variables)
     - Names cannot contain whitespaces or special characters like !, #, %, etc.
     - Reserved words (like C++ keywords, such as int) cannot be used as names
    */
}