#include <iostream>
#include <typeinfo>

int main()
{
    // Program demonstrating use of auto, decltype, and range-based for statement

    auto x = 5;                 // auto keyword instructs the compiler to determine data type based on
                                // the initialization list, in this case 5 is an integer.

    auto pi = 3.14159;          // compiler will deduce pi needs to be a double since we are using a decimal number.

    decltype(x) d = x * 2;      // While auto lets you declare a variable with type determined by the compiler,
                                // decltype extracts the type from an existing variable or expression.
    auto r = 5;
    decltype(pi) cirArea = pi * r * r; // Another example showing cirArea getting the declaration type of variable pi (double).
    std::cout << "The area of a circle with a radius of " << r << " is " << cirArea << std::endl;


    // Print out the above data types
    std::cout << "\nData type of variable x:  " << typeid(x).name() << std::endl;
    std::cout << "Data type of variable pi: " << typeid(pi).name() << std::endl;
    std::cout << "Data type of variable d:  " << typeid(d).name() << std::endl;
    std::cout << "Data type of variable r:  " << typeid(r).name() << std::endl;
    std::cout << "Data type of variable cirArea:  " << typeid(cirArea).name() << std::endl;

    std::cout << std::endl;


    int arr[5] {1,2,3,4,5};           // Create and initialize a 5 element array

    for (auto x : arr)                // Use range-based for statement to extract elements from array
            std::cout << x << " ";    // Print each element
    std::cout << std::endl;

    return 0;
}
