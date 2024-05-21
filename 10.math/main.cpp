#include <iostream>
// Include the cmath library
#include <cmath>
using namespace std;

int main()
{
    ///// C++ Math
    // C++ has many functions that allows you to perform mathematical tasks on numbers.

    /// Max and min

    int x = 5;
    int y = 10;

    // And the min(x,y) function can be used to find the lowest value of x and y:
    cout << "Lowest value of x and y is: " << min(x, y) << endl;

    // The max(x,y) function can be used to find the highest value of x and y:
    cout << "Highest value of x and y is: " << max(x, y) << endl;

    /// C++ <cmath> Header
    // Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file:

    cout << "Square root of 64 is: " << sqrt(64) << endl;
    cout << "Round off value of 2.6 is: " << round(2.6) << endl;
    cout << "Log of 2 is: " << log(2) << endl;

    /// C++ Math Functions
    // For Complete reference of CPP Math Functions see https://www.w3schools.com/cpp/cpp_ref_math.asp
}