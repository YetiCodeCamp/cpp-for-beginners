---
title: C++ Vector pop_back() function
permalink: /cpp-vector-pop-back
---

## C++ Vector pop_back() Function
<br/>
The C++ vector.pop_back() function deletes the element at the end of a vector and reduces the size of the vector by one. This function does not take a parameter.
<br/><br/>

Syntax:

Example, using a vector "v1".
```cpp
v1.pop_back();
```
Deletes the last element of v1 and reduces its size by one.

<br/><br/>
<p align="center">
<img width="681" height="293" src="images\videos\Cpp11\vector_pop_back.jpg" title="Vector.pop_back() Example">
</p>
<br/><br/>



This example is a complete program using the vector pop_back() function to remove the last element in a vector.
```cpp
#include<iostream>
#include<vector>

int main()
{
std::vector<int> numbers{1,2,3,4,5,6,7,8,9,10};

std::cout << numbers.size() << "\n";

numbers.pop_back();

for( v : numbers)
    std::cout << v << " ";

std::cout << "\n" << numbers.size();

return 0;
}
```
Output: <br/>
10 <br/>
1 2 3 4 5 6 7 8 9 <br/>
9


<br/><br/>
