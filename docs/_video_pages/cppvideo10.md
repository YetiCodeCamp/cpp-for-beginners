---
title: Video 10 - Multidimensional Arrays and Introduction to Vectors
permalink: /cppvideo10
---

# This is the companion page for the C++ for Beginners Video 10 – Multidimensional Arrays and Intro to Vectors
<br/>
<br/>
<p align="center">
<iframe width="560" height="315" src="https://www.youtube.com/embed/U30xCSerpXM" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</p>
<br/>
<br/>
In this 10th video of the C++ for beginners series we will look at using multidimensional arrays. I will also be covering the auto keyword for data types, and utilizing the range-based for statement. We wrap up with a quick intro to vectors. I will be covering vectors more in-depth in the next video.
<br/>
<br/>
## Multidimensional Arrays
<br/>
![Multidimensional 2D Array Example](images\videos\Cpp10\Lesson10_Multi_Array.jpg)
<br/>
<br/>
Multidimensional Arrays allow us to store and utilize data in more ways that resemble real world usage. You can think of a two dimensional array as sort of a table of data, with rows and columns making up the array elements.
<br/>
<br/>
```cpp
int arr[3][5] { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
```
The above example makes a 2D array of 3 by 5 elements. Think of it as 3 rows of 5 columns, like you would a table of data.
<br/>
<br/>
<table>
  <tr>
    <th>index</th>
    <th>0</th>
    <th>1</th>
    <th>2</th>
    <th>3</th>
    <th>4</th>
  </tr>
  <tr>
    <td>0</td>
    <td>1</td>
    <td>2</td>
    <td>3</td>
    <td>4</td>
    <td>5</td>
  </tr>
  <tr>
    <td>1</td>
    <td>6</td>
    <td>7</td>
    <td>8</td>
    <td>9</td>
    <td>10</td>
  </tr>
  <tr>
    <td>2</td>
    <td>11</td>
    <td>12</td>
    <td>13</td>
    <td>14</td>
    <td>15</td>
  </tr>
</table>
<br/>
You can access the data using the form: array\[row index][column index] where index starts at 0. So arr[2][2], refers to 13 in the above example. You go down to the index 2 row, and over to index 2 column, remembering to start with 0 for each (0,0 is an valid element and contains 1).
<br/>
Note that the square brackets set the size only during declaration, afterward they refer to the index positions of the array that we want to access.
<br/>
<br/>
## The auto Keyword
<br/>
![auto Keyword](images\videos\Cpp10\Lesson10_Auto_Keyword.jpg)
<br/>
<br/>
Starting with C++11, the "auto" keyword instructs the compiler to deduce the type of a declared variable from its initialization expression. Before this auto had a different purpose and thus will not work if you are using an earlier version of C++. In our videos we are using C++14 for the introductory series, so you should be fine. You can double check in CodeBlocks by going to Settings->Compiler and making sure use C++14 is checked.
<br/>
The auto keyword allows us to forgo a specifying a data type during the declaration of variables and lets the compiler assign it at compile time. The compiler does this type inference by looking at the value(s) assigned to the variable or object.
<br/>
<br/>
For example:
```cpp
auto x = 17;
```
<br/>
<br/>
The compiler will deduce x should be an integer based upon the fact we assigned it a literal integral value, in this case 17.
```cpp
auto pi = 3.14159;
```
The compiler will deduce pi should be a double based upon the fact we assigned it a floating point value, in this case 3.14159.
<br/>
<br/>
## The decltype Keyword
<br/>
The decltype (Declared Type) keyword derives the data type from the declared type of a variable or an expression. While the auto keyword allows you to declare a variable with particular type based upon initialization, decltype lets you extract the type from the variable.

Sounds complicated, but this example basically shows what's going on:
```cpp
auto pi = 3.141592653589
auto r = 5;
decltype(pi) cirArea = pi * r * r;
```
pi is auto set to type double as it was assigned a floating point number.
r is auto set to type int as it was assigned an integral number.
cirArea is also set to double, as the datatype is extracted from pi, which of course is of type double.

<br/>
<br/>

## Range-based for
<br/>
![Range-based for statement](images\videos\Cpp10\Lesson10_Ranged_for_Statement.jpg)
<br/>
<br/>
```cpp
for(auto v : vec)
    std::cout << v << " ";            
```

Similar to the ‘for’ loop, the range-based for statement allows us an easy way to iterate through a collection of items, like lists, arrays, or vectors.

Regular for loops still have their place, however, so don’t think of it as a replacement as much as an alternative in certain situations.

The name you use in the "range-declaration" portion of the for statement is 'local' to the for statement and cannot be re-declared in "range_expression" or "statement" sections of the loop. For example, the 'v" in the above code snippet cannot be reused again within the for body.

The auto keyword is preferred in the "range-declaration" portion of the statement.

<br/>
<br/>
## Vectors
<br/>
<br/>
![Vectors](images\videos\Cpp10\Lesson10_Vectors.jpg)
<br/>
<br/>
A vector is declared in the form of: vector<datatype>name_of_vector

```cpp
vector<int> v {1,2,3,4,5};
```
Vectors are part of the standard namespace, so if you are not the "using namespace std;" at the top of your program, you need to prefix vector with std:: liek you would with cout.
```cpp
std::vector<int> v1 {1,2,3,4,5};


The following program creates a vector, assigns some initial values, then it uses the pushback function to add 3 more data items, and finally uses a range-based for statement to print the contents to the screen.

``cpp
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> v1 {1,2,3,4,5};

    v1.push_back(97);
    v1.push_back(98);
    v1.push_back(99);

    for(auto &v : v1)
        std::cout << v << " ";
    std::cout << std::endl;

    return 0;
}

Output: 1 2 3 4 5 97 98 99

Much more information on Vectors will be available with Video 11 in the series.

<br/>
<br/>
<br/>
