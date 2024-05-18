#include <iostream>
using namespace std;

/*
C++ Data Types

As explained in the Variables chapter, a variable in C++ must be a specified data type:

*/

// Main function
int main()
{
    // Integer Types
    int a = 10;           // typical integer type
    short b = 20;         // short integer type
    long c = 30L;         // long integer type
    long long d = 40LL;   // long long integer type
    unsigned int e = 50U; // unsigned integer type

    // Character Types
    char f = 'A';          // character type
    signed char g = 'B';   // signed character type
    unsigned char h = 'C'; // unsigned character type
    wchar_t i = L'D';      // wide character type
    char16_t j = u'E';     // 16-bit character type
    char32_t k = U'F';     // 32-bit character type

    // Floating-Point Types
    float l = 3.14f;              // single precision floating-point type
    double m = 3.14159;           // double precision floating-point type
    long double n = 3.141592653L; // extended precision floating-point type

    // Boolean Type
    bool o = true; // boolean type, can be true or false

    // Array
    int arr[5] = {1, 2, 3, 4, 5}; // array type

    // Pointer
    int *ptr = &a; // pointer type pointing to an integer

    // Reference
    int &ref = a; // reference type referring to 'a'

    // Enumerations
    enum Color
    {
        RED,
        GREEN,
        BLUE
    };
    Color favoriteColor = GREEN; // enumeration type

    // Structures
    struct Point
    {
        int x;
        int y;
    };
    Point p1 = {10, 20}; // structure type

    // Unions
    union Data
    {
        int intValue;
        float floatValue;
    };
    Data data;
    data.intValue = 100; // union type

    // Class
    class MyClass
    {
    public:
        int myValue;
        MyClass(int val) : myValue(val) {}
    };
    MyClass obj(10); // class type

    // Auto Type Deduction (C++11)
    auto var = 42; // 'var' is deduced to be an integer

    // nullptr (C++11)
    int *nullPtr = nullptr; // nullptr type, replaces NULL

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

    // Print out some of the types to avoid unused type warnings
    cout << "Integer a: " << a << endl;
    cout << "Character f: " << f << endl;
    cout << "Boolean o: " << o << endl;
    cout << "Array element: " << arr[0] << endl;
    cout << "Pointer value: " << *ptr << endl;
    cout << "Reference value: " << ref << endl;
    cout << "Enum value: " << favoriteColor << endl;
    cout << "Structure Point p1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "Union value: " << data.intValue << endl;
    cout << "Class value: " << obj.myValue << endl;
    cout << "Auto type: " << var << endl;
    cout << "Constexpr type: " << constExprVar << endl;
    cout << "Mutable type in const object: " << mc.mutableVar << endl;

    return 0;
}
