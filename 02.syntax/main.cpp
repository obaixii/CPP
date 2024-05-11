// #include <iostream> is a header file library that lets us work with input and output objects, such as cout (used in line 2). Header files add functionality to C++ programs.
#include <iostream>

// using namespace std means that we can use names for objects and variables from the standard library.
using namespace std;

// A blank line. C++ ignores white space. But we use it to make the code more readable.

// Another thing that always appear in a C++ program is int main(). This is called a function. Any code inside its curly brackets {} will be executed.
int main()
{
    // cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example, it will output "Hello World!".
    cout << "Hello World, Learning syntax" << endl;

    // The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:
    std::cout << "Hello World!";

    // Every C++ statement ends with a semicolon ;.

    // return 0 ends the main function.
    return 0;
}