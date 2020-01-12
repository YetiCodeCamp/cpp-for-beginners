#include <iostream>
#include <vector>

int main()
{
    int oldArr[5] {1,2,3,4,5};

    // format vector<DataType> vectorName
    std::vector<int> myVector {1,2,3,4,5};

    //Print Array
    int n = sizeof(oldArr)/sizeof(oldArr[0]);   // Note we need to determine number of elements in the array ourselves
    for(int i=0;i<n; i++)
        std::cout << oldArr[i] << " ";
    std::cout << std::endl;

    std::cout << "\nSize of vector: " << myVector.size() << std::endl << std::endl;  // Display num of elements using vector.size()

    // Print Vector using array style
    for(unsigned i=0;i<myVector.size(); i++)    // Note vector.size() returns an unsigned int
        std::cout << myVector[i] << " ";        // Can access elements like we did with arrays using square brackets
    std::cout << std::endl;

    // Print Vector using at() function
    for(unsigned i=0;i<myVector.size(); i++)
        std::cout << myVector.at(i) << " ";     // vector.at(i) returns element at specified index "i"
    std::cout << std::endl;

    // Print Vector using range-based for statement
    for(const auto &v : myVector)
        std::cout << v << " ";
    std::cout << std::endl;

    std::vector<int>v1;                         // Example showing we can declare and initialize vector on separate lines.

    v1 = {1,2,3,4,5,6,7,8,9,10,11,12};

    std::cout << "\n\nContents of V1:\n";
    for(const auto &v : v1)                     // v is the item we are retrieving from the range and v1 is the range, or in this case vector
        std::cout << v << " ";
    std::cout << std::endl;


    return 0;
}
