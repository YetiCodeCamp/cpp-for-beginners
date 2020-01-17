---
title: Video 11 - C++ Vectors
permalink: /cppvideo11
---

## This is the companion page for the C++ for Beginners  
## Video 11 – C++ Vectors
<br/>

While we were introduced to vectors in the last video, since this one is dedicated strictly to vectors I thought a quick review was in order. This also helps anyone just coming in straight to this video.
<br/><br/>

![Vectors](images\videos\Cpp10\Lesson10_Vectors.jpg)
<br/>
Vectors are part of the C++ Standard Template Library or often referred to as simply STL. They are also part of the standard namespace, so you need to prefix they keyword vector with std:: as we do with cout.

Vectors have member functions available to them to make working with them easy.

Be sure to #include \<vector> at the top of your program.
<br/><br/>
Vectors are declared with keyword vector, the data type of the elements, and a name. We do not need to give it a size right away like we did with arrays. Vectors can be resized in memory as needed.
<br/>
We can initialize vectors upon declaration like in this example:
```cpp
std::vector<int> myVector = {1,2,3,4,5};
```
<br/>
We can declare and initialize vectors at separate times, for example:
```cpp
std::vector<int> v1;
v1 = {1,2,3,4,5};
```
<br/><br/>
![Vector Review](images\videos\Cpp11\Lesson11_Vector_Review.jpg)
<br/><br/>

We can create a vector to hold the daily high temperatures for the last year, month or week. Here is a simple example showing a vector holding 7 temperature values.
```cpp
std::vector<double> dailyHigh {72.5, 75.6, 82.3, 85.7, 78.4, 81.9, 88.5};
```
<br/>
We can access the contents of the array by referencing the elements index:

```cpp
std::cout << dailyHigh[3];    //prints out 85.7
std::cout << dailyHigh.at(2); // prints out 82.3
```
<br/>
Here is a complete example program that compile and will print out the example dailyHigh vector using a range-based for statement:
```cpp
#include <iostream>
#include <vector>

int main()
{
    std::vector<double> dailyHigh {72.5, 75.6, 82.3, 85.7, 78.4, 81.9, 88.5};
    for(auto v : dailyHigh)
            std::cout << v << " ";
        std::cout << "\n" <<std::endl;
    return 0;
}
```

<br/><br/>











### prtVec()

Instead of writing out a bunch of cout statements to display the vector element values all the time, cluttering up the code, let’s utilize a function.

This is a perfect example of when to use a function, when you are going to repeatedly use a certain segment of code over and over again.
<br/><br/>

Here is the completed print vector function prtVec():
```cpp
void prtVec(const std::vector<auto> &vec, std::string n="")
{
        // Function takes 2 parameters, vector and optional name
        if (n!="")
            std::cout << n << " is: ";
        for(auto v : vec)
            std::cout << v << " ";
        std::cout << "\n" <<std::endl;
}
```
<br/><br/>
### Times Table
<br/>
Final form of the timesTable() function. Remember to declare it above main with:
```cpp
void timesTable(int x = 10, int y = 10);
```
<br/><br/>
Put the actual function definition below main:
```cpp
void timesTable(int x, int y)
{

    std::string title = "\n\nv4 Times Table\n\n";   // Initial title string with "\n" newlines for positioning

    for(int i=0; i<((y / 2) -1); i++)               // For loop iterating up to y columns / 2 and subtracting one.
        title.insert(2, "\t");                      // Insert a tab at index 2

    std::cout << title;                             // Print the modified title (scaled according to columns)

    std::vector<std::vector<int>> v4(x , std::vector<int>(y));  // Create a vector containing x vectors of size y.

    for(int i=0; i<x; i++)                          // Standard for-loop to iterate through and fill vector elements with i*j
        for (int j=0; j<y; j++)
            v4[i][j] = (j+1) * (i+1);               // Need to add one to account for 0 index

                                                    // Print out vector, just as we did for our arrays using range-based for statement
    for(const auto &x : v4)                         // Iterate through "rows" or vector 'x' (there are 10 vectors)
    {
        for(const auto &y : x)                      // Iterate through "cols" or elements in vector x
            std::cout << y << "\t";
        std::cout << "\n\n";
    }
}
```
