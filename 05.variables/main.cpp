// variables_example.cpp
#include <iostream>
using namespace std;

/*
C++ Variables

Variables are containers for storing data values.

*/

// Main function
int main()
{
    // Integer Types
    int a = 10;           // typical integer variable
    short b = 20;         // short integer variable
    long c = 30L;         // long integer variable
    long long d = 40LL;   // long long integer variable
    unsigned int e = 50U; // unsigned integer variable

    // Character Types
    char f = 'A';          // character variable
    signed char g = 'B';   // signed character variable
    unsigned char h = 'C'; // unsigned character variable
    wchar_t i = L'D';      // wide character variable
    char16_t j = u'E';     // 16-bit character variable
    char32_t k = U'F';     // 32-bit character variable

    // Floating-Point Types
    float l = 3.14f;              // single precision floating-point variable
    double m = 3.14159;           // double precision floating-point variable
    long double n = 3.141592653L; // extended precision floating-point variable

    // Boolean Type
    bool o = true; // boolean variable, can be true or false

    // Array
    int arr[5] = {1, 2, 3, 4, 5}; // array variable

    // Pointer
    int *ptr = &a; // pointer variable pointing to an integer

    // Reference
    int &ref = a; // reference variable referring to 'a'

    // Enumerations
    enum Color
    {
        RED,
        GREEN,
        BLUE
    };
    Color favoriteColor = GREEN; // enumeration variable

    // Structures
    struct Point
    {
        int x;
        int y;
    };
    Point p1 = {10, 20}; // structure variable

    // Unions
    union Data
    {
        int intValue;
        float floatValue;
    };
    Data data;
    data.intValue = 100; // union variable

    // Class
    class MyClass
    {
    public:
        int myValue;
        MyClass(int val) : myValue(val) {}
    };
    MyClass obj(10); // class variable

    // Auto Type Deduction (C++11)
    auto var = 42; // 'var' is deduced to be an integer

    // nullptr (C++11)
    int *nullPtr = nullptr; // nullptr variable, replaces NULL

    // Constexpr (C++11)
    constexpr int constExprVar = 100; // compile-time constant

    // Mutable (within class, allows modification even if the object is const)
    class MutableClass
    {
    public:
        mutable int mutableVar;
        MutableClass(int val) : mutableVar(val) {}
    };
    const MutableClass mc(200);
    mc.mutableVar = 300; // allowed due to 'mutable' keyword

    // Print out some of the variables to avoid unused variable warnings
    cout << "Integer a:asasa " << a << endl;
    cout << "Character f: " << f << endl;
    cout << "Boolean o: " << o << endl;
    cout << "Array element: " << arr[0] << endl;
    cout << "Pointer value: " << *ptr << endl;
    cout << "Reference value: " << ref << endl;
    cout << "Enum value: " << favoriteColor << endl;
    cout << "Structure Point p1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "Union value: " << data.intValue << endl;
    cout << "Class value: " << obj.myValue << endl;
    cout << "Auto variable: " << var << endl;
    cout << "Constexpr variable: " << constExprVar << endl;
    cout << "Mutable variable in const object: " << mc.mutableVar << endl;

    return 0;
}
