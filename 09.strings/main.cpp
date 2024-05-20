#include <iostream>
#include <string>

using namespace std;

int main()
{
    ///// C++ Strings

    /*
    Strings are used for storing text.
    A string variable contains a collection of characters surrounded by double quotes.

    To use strings, you must include an additional header file in the source code, the <string> library.
    */

    string greeting = "Hello";

    cout << greeting << endl;

    ///// C++ String Concatenation
    // The + operator can be used between strings to add them together to make a new string. This is called concatenation.

    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName << endl;

    /// Append
    // A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function.

    fullName = firstName.append(lastName);
    cout << fullName << endl;

    ////// C++ Numbers and Strings
    // Adding Numbers and Strings

    // If you add two numbers, the result will be a number:

    int x = 10;
    int y = 20;
    int z = x + y; // z will be 30 (an integer)
    cout << z << endl;

    // If you add two strings, the result will be a string concatenation:

    string a = "10";
    string b = "20";
    string c = a + b; // z will be 1020 (a string)
    cout << c << endl;

    /*
    If you try to add a number to a string, an error occurs:
    string x = "10";
    int y = 20;
    string z = x + y;

    */

    ///// C++ String Length
    // To get the length of a string, use the length() or size() function.

    string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the text string is: " << text.length() << endl;
    cout << "The length of the text string is: " << text.size() << endl;

    ///// C++ Access Strings
    // You can access the characters in a string by referring to its index number inside square brackets [].

    string myString = "Hello";
    cout << "First Character of myString is: " << myString[0] << endl;
    // Outputs H

    /// Change String Characters
    myString[0] = 'J';
    cout << myString << endl;

    ///// C++ Special Characters
    // Strings - Special Characters - Because strings must be written within quotes, C++ will misunderstand this string, and generate an error.

    // The solution to avoid this problem, is to use the backslash escape character.

    // The sequence \"  inserts a double quote in a string:
    string txt = "We are the so-called \"Vikings\" from the north.";
    cout << txt << endl;

    // The sequence \'  inserts a single quote in a string:
    txt = "It\'s alright.";
    cout << txt << endl;

    // The sequence \\  inserts a single backslash in a string:
    txt = "The character \\ is called backslash.";
    cout << txt << endl;

    // The sequence \n  inserts a new line
    txt = "The character \n is called new line.";
    cout << txt << endl;

    // The sequence \n  inserts a new tab
    txt = "The character \t is called new tab space.";
    cout << txt << endl;

    ///// C++ User Input Strings
    // It is possible to use the extraction operator >> on cin to store a string entered by a user:

    string Name;
    cout << "Type your name: ";
    cin >> Name; // get user input from the keyboard
    cout << "Your name is: " << Name;

    // Output:
    // Type your full name: John Doe
    // Your name is: John

    /*
    From the example above, you would expect the program to print "John Doe", but it only prints "John".

    That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:

    */

    cout << "Type your name: ";
    getline(cin, fullName); // get user input from the keyboard
    cout << "Your name is: " << Name;

    // Type your full name: John Doe
    // Your name is: John Doe

    ///// C++ String Namespace
    // You might see some C++ programs that runs without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects:

    std::string wish = "Happy Birthday";
    std::cout << wish;
    return 0;
}
