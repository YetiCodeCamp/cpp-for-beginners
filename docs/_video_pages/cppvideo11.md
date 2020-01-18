---
title: Video 11 - C++ Vectors
permalink: /cppvideo11
---

## This is the companion page for the C++ for Beginners  
## Video 11 – C++ Vectors
<br/><br/>
<p align="center">
<iframe width="560" height="315" src="https://www.youtube.com/embed/2O6494hpWVo" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</p>
<br/><br/>

While we were introduced to vectors in the last video, since this one is dedicated strictly to vectors I thought a quick review was in order. This also helps anyone just coming in straight to this video.
<br/><br/>

![Vectors](images\videos\Cpp10\Lesson10_Vectors.jpg)
<br/><br/>
Vectors are part of the C++ Standard Template Library or often referred to as simply STL. They are also part of the standard namespace, so you need to prefix they keyword vector with std:: as we do with cout.

Be sure to #include \<vector> at the top of your program.

Vectors have member functions available to them to make working with them easy.

<br/><br/>


<style type="text/css">
.tg  {border-collapse:collapse;border-spacing:0;border-color:#aabcfe;}
.tg td{font-family:Arial, sans-serif;font-size:14px;padding:10px 5px;border-style:solid;border-width:0px;overflow:hidden;word-break:normal;border-color:#aabcfe;color:#669;background-color:#e8edff;}
.tg th{font-family:Arial, sans-serif;font-size:14px;font-weight:normal;padding:10px 5px;border-style:solid;border-width:0px;overflow:hidden;word-break:normal;border-color:#aabcfe;color:#039;background-color:#b9c9fe;}
.tg .tg-cly1{text-align:left;vertical-align:middle}
.tg .tg-baqh{text-align:center;vertical-align:top}
.tg .tg-yla0{font-weight:bold;text-align:left;vertical-align:middle}
.tg .tg-nrix{text-align:center;vertical-align:middle}
.tg .tg-0lax{text-align:left;vertical-align:top}
</style>
<table class="tg">
  <tr>
    <th class="tg-yla0">Function</th>
    <th class="tg-yla0">Description</th>
  </tr>
  <tr>
    <td class="tg-nrix"><a href="https://yeticode.dev/cpp-vector-assign">assign()</a></td>
    <td class="tg-cly1">Assigns new values to a vector replacing any existing elements.<br></td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-at">at()</a><br></td>
    <td class="tg-0lax">Returns the value of the element specified.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-back">back()</a><br></td>
    <td class="tg-0lax">Returns the value of the last element in a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-begin">begin()</a><br></td>
    <td class="tg-0lax">Returns an iterator to the first element in a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-capacity">capacity()</a></td>
    <td class="tg-0lax">Returns the current memory allocation of a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-cbegin">cbegin()</a><br></td>
    <td class="tg-0lax">Returns a const iterator to the first element in a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-cend">cend()</a><br></td>
    <td class="tg-0lax">Returns an iterator to just beyond the last element of a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-clear">clear()</a><br></td>
    <td class="tg-0lax">Clears (erases) the contents of a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-crbegin">crbegin()</a><br></td>
    <td class="tg-0lax">Returns a const iterator to the first element in a reversed vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-crend">crend()</a><br></td>
    <td class="tg-0lax">Returns a const iterator to the end of a reversed vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-data">data()</a></td>
    <td class="tg-0lax">Returns a pointer to the first element in the vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-emplace">emplace()</a><br></td>
    <td class="tg-0lax">It inserts a new element just before the position specified.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-emplace-back">emplace_back()</a><br></td>
    <td class="tg-0lax">It inserts a new element at the end of a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-empty">empty()</a><br></td>
    <td class="tg-0lax">Boolean check if the vector is empty.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-end">end()</a><br></td>
    <td class="tg-0lax">Returns a iterator to the end of a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-erase">erase()</a><br></td>
    <td class="tg-0lax">Removes one or more elements from a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-front">front()</a></td>
    <td class="tg-0lax">Returns the value of the first element in a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-get-allocator">get_allocator()</a></td>
    <td class="tg-0lax">Returns an object to the allocator class used by a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-get-insert">insert()</a></td>
    <td class="tg-0lax">Inserts one or moreelements into the vector at the specified position.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-get-max-size">max_size()</a></td>
    <td class="tg-0lax">Returns the maximum length of the vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-get-max-operator">operator[]</a></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-operator">operator=</a></td>
    <td class="tg-0lax"></td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-pop-back">pop_back()</a></td>
    <td class="tg-0lax">Deletes the last element of a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-push-back">push_back()</a></td>
    <td class="tg-0lax">Adds an element to the end of a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-rbegin">rbegin()</a></td>
    <td class="tg-0lax">Returns an iterator to the first element in a reversed vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-rend">rend()</a></td>
    <td class="tg-0lax">Returns an iterator to the end of a reversed vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-reserve">reserve()</a></td>
    <td class="tg-0lax">Reserves a minimum length of storage for a vector object.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-resize">resize()</a></td>
    <td class="tg-0lax">Specifies a new size for a vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-shrink">shrink_to_fit()</a></td>
    <td class="tg-0lax">Reduces the vector capacity by settings it to the current size of the vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-size">size()</a></td>
    <td class="tg-0lax">Returns the number of elements in the vector.</td>
  </tr>
  <tr>
    <td class="tg-baqh"><a href="https://yeticode.dev/cpp-vector-swap">swap()</a></td>
    <td class="tg-0lax">Swaps the elements of two vectors.</td>
  </tr>
</table>

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
