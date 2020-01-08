#include <iostream>
#include <algorithm>

using namespace std;

void myFirstArray();
void mySecondArray();


int main()
{

    int arr1[5] = {22, 73, 17, 42, 35};         // Declare arr1 array and set its size to 5 elements, assigns initial data
    int arr2[5]{22, 73, 17, 42, 35};            // C++ 11 and later style (no = sign) (same as arr1)
    int arr3[] = {0, 1, 2, 3, 4};               // No size specified, compiler sets length based on initialization list

    cout << arr1[3] << endl << endl;            // Get value from array using array name and index






//    for(int i=0;i<5;i++)                        // Loops make getting data easy
//    {
//    cout << "Index " << i << ": "
//            << arr1[i] << endl;
//    }


    //myFirstArray();
    //mySecondArray();

    return 0;
}


void myFirstArray()
{
    cout << "\nInside myFirstArray:\n";
    int arr[] = {11, 4, 18, 92, 66, 23, 30, 54, 18, 80};    // Create array and initialize, array size based on list (10 elements)
    int n = sizeof(arr)/sizeof(arr[0]);                     // Determine number of elements in array, assign to n
    cout << "\nSize of Entire Array (In Bytes): "
                            << sizeof(arr) << endl;         // based on Memory size of entire array divided by
    cout << "Size of Single Element (In Bytes): "
                         << sizeof(arr[0]) << endl;         // Memory size of a single elements data type (int, 4 bytes)
    cout << "Value of n: " << n << endl;

    cout << "\nInitial Array contents:        ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    sort(arr, arr+n);                                       // Calls sort function to default sort array (ascending order)

    cout << "\nArray contents after sorting:  ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl << endl;
}


void mySecondArray()
{
    cout << "\nInside mySecondArray:\n";
    const int N = 10;                                       // Number of elements in array, earlier C++ required const while later versions allow user specified size
    int myArr[N];                                           // Declare an array named myArr with size of N elements

    for(int i=0; i<N;i++)                                   // Loop 0 to <N (10 iterations)
        myArr[i] = rand() % 899 + 100;                      // Fill array with random integers (100-999)

    cout << "\nArray contents before sorting:  ";
    for (int i = 0; i < N; ++i)
        cout << myArr[i] << " ";

    sort(myArr, myArr+N);                                   // Call default sort

    cout << "\n\nArray contents after sorting:   ";
    for (int i = 0; i < N; ++i)
        cout << myArr[i] << " ";

    int n = sizeof(myArr)/sizeof(myArr[0]);                 // better way to determine array size in case it changes

    sort(myArr, myArr+n, greater<int>());                   // Reverse sort

    cout << "\n\nArray contents reverse sort :   ";
    for (int i = 0; i < n; ++i)
        cout << myArr[i] << " ";

    cout << endl << endl;
}
