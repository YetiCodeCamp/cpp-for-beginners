#include <iostream>


int main()
{

   // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};         // Initialize the array
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };    // More human readable way to initialize

    int arr2[3][5] { {1, 2, 3, 4 ,5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15} };


    std::cout << "\nArray contents using a standard 'for loop':" << std::endl;

    for(int row=0;row<3; row++)                           // Outer loop controls which row we read
    {
        for(int col=0; col<3; col++)                      // Inner loop controls which column we read from
            std::cout << arr[row][col] << " ";
        std::cout << std::endl;
    }


    std::cout << "\nArray contents with a 'range-based for statement':" << std::endl;
    for(auto &row : arr)
    {
        for(auto col : row)
            std::cout << col << " ";
        std::cout << std::endl;
    }


    // An even better method when all we want to do is read values, not modify them
    // the const keyword specifies that the object or variable is not modifiable.
    std::cout << "\nRead-only version using a 'range-based for statement':" << std::endl;
    for(const auto &row : arr)
    {
        for(const auto &col : row)
            std::cout << col << " ";
        std::cout << std::endl;
    }


    std::cout << "\nRead-only version 3 x 5 using a 'range-based for statement':" << std::endl;
    for(const auto &row : arr2)
    {
        for(const auto &col : row)
            std::cout << col << " ";
        std::cout << std::endl;
    }


    std::cout << std::endl;

    // Basic 10-element integer array.
    int x[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Range-based for loop to iterate through the array.
    for(const auto &y : x )
        std::cout << y << " ";
    std::cout << std::endl;


    return 0;
}

