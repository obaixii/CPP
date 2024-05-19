#include <iostream>
using namespace std;

int main()
{
    ///// C++ Operators
    // Operators are used to perform operations on variables and values.

    // C++ divides the operators into the following groups:

    /*
    Arithmetic operators
    Assignment operators
    Comparison operators
    Logical operators
    Bitwise operators
    */

    ///// Arithmetic Operators
    // Arithmetic operators are used to perform common mathematical operations. (Addition,Subtraction,Multiplication,Division,Modulus,Increment,Decrement)

    // Addition

    int sum1 = 100 + 50; // 150 (100 + 50)
    cout << "The sum of 100 + 50 is: " << sum1 << endl;

    // Subtraction
    int sum2 = 100 - 50; // 50 (100 - 50)
    cout << "The sum of 100 - 50 is: " << sum2 << endl;

    // Multiplication
    int sum3 = 2 * 3; // 6 (2 - 3)
    cout << "The sum of 2 * 3 is: " << sum3 << endl;

    // Division
    int sum4 = 100 / 50; // 2 (100 / 50)
    cout << "The sum of 100 / 50 is: " << sum4 << endl;

    // Modulus
    int sum5 = 9 % 2; // 1 (9 % 2)
    cout << "The sum of 9 % 2 is: " << sum4 << endl;

    // Increment
    int x = 2;
    ++x; // 3 (2+1)
    cout << "The value of x is: " << x << endl;

    // Decrement
    int y = 2;
    --y; // 1 (2-1)
    cout << "The value of y is: " << y << endl;

    ///// Assignment Operators
    // Assignment operators are used to assign values to variables.

    // = Operator - Assignment operator
    int value = 2;
    cout << "Initial value: " << value << endl;

    // += Operator - Addition assignment
    value += 1; // (value = 3)
    cout << "Value after += 1: " << value << endl;

    // -= Operator - Subtraction assignment
    value -= 1; // (value = 2)
    cout << "Value after -= 1: " << value << endl;

    // *= Operator - Multiplication assignment
    value *= 2; // (value = 4)
    cout << "Value after *= 2: " << value << endl;

    // /= Operator - Division assignment
    value /= 2; // (value = 2)
    cout << "Value after /= 2: " << value << endl;

    // %= Operator - Remainder assignment
    value %= 2; // (value = 0)
    cout << "Value after %= 2: " << value << endl;

    // &= Operator - Bitwise AND assignment (&=)
    // The bitwise AND assignment (&=) operator performs bitwise AND on the two operands and assigns the result to the left operand.
    value = 3;  // Setting value to 3 for demonstration
    value &= 2; // (value = 2)
    cout << "Value after &= 2: " << value << endl;

    // |= Operator - Bitwise OR assignment (|=)
    // The bitwise OR assignment (|=) operator performs bitwise OR on the two operands and assigns the result to the left operand.
    value = 1;  // Setting value to 1 for demonstration
    value |= 2; // (value = 3)
    cout << "Value after |= 2: " << value << endl;

    // ^= Operator - Bitwise XOR assignment (^=)
    // The bitwise XOR assignment (^=) operator performs bitwise XOR on the two operands and assigns the result to the left operand.
    value = 3;  // Setting value to 3 for demonstration
    value ^= 2; // (value = 1)
    cout << "Value after ^= 2: " << value << endl;

    // >>= Operator - Right shift assignment (>>=)
    // The right shift assignment (>>=) operator performs right shift on the two operands and assigns the result to the left operand.
    value = 4;   // Setting value to 4 for demonstration
    value >>= 1; // (value = 2)
    cout << "Value after >>= 1: " << value << endl;

    // <<= Operator - Left shift assignment (<<=)
    // The left shift assignment (<<=) operator performs left shift on the two operands and assigns the result to the left operand.
    value = 1;   // Setting value to 1 for demonstration
    value <<= 2; // (value = 4)
    cout << "Value after <<= 2: " << value << endl;

    /////  Comparison Operators

    /*
    Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.

    The return value of a comparison is either 1 or 0, which means true (1) or false (0). These values are known as Boolean values, and you will learn more about them in the Booleans and If..Else chapter.
    */

    int value1 = 5;
    int value2 = 3;

    // Comparison operators are used to compare two values.

    // > Operator - Greater than
    cout << (value1 > value2) << endl; // 1 (true), because 5 is greater than 3

    // == Operator - Equal to
    cout << (value1 == value2) << endl; // 0 (false), because 5 is not equal to 3

    // != Operator - Not equal to
    cout << (value1 != value2) << endl; // 1 (true), because 5 is not equal to 3

    // < Operator - Less than
    cout << (value1 < value2) << endl; // 0 (false), because 5 is not less than 3

    // >= Operator - Greater than or equal to
    cout << (value1 >= value2) << endl; // 1 (true), because 5 is greater than or equal to 3

    // <= Operator - Less than or equal to
    cout << (value1 <= value2) << endl; // 0 (false), because 5 is not less than or equal to 3

    // Logical Operators
    // As with comparison operators, you can also test for true (1) or false (0) values with logical operators.
    
    string gender = "male";
    int age = 24;

    // Logical operators are used to combine conditional statements.

    // && Operator - Logical AND
    // Returns true if both statements are true
    cout << (gender == "male" && age <= 24) << endl; // 1 (true), because gender is "male" AND age is 24 which is less than or equal to 24

    // Another example of Logical AND
    cout << (gender == "male" && age <= 23) << endl; // 0 (false), because gender is "male" BUT age is not less than or equal to 23

    // || Operator - Logical OR
    // Returns true if one of the statements is true
    cout << (gender == "male" || age <= 23) << endl; // 1 (true), because gender is "male" OR age is not less than or equal to 23

    // ! Operator - Logical NOT
    // Reverses the result, returns false if the result is true
    cout << !((gender == "male" || age <= 24)) << endl; // 0 (false), because the original expression (gender is "male" OR age is less than or equal to 24) is true, and NOT operator reverses it to false
}