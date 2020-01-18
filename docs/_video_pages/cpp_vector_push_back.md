---
title: C++ Vector push_back() function
permalink: /cpp-vector-push-back
---

## C++ Vector push_back() Function
<br/>
The C++ vector.push_back() function adds a new element at the end of a vector. This function takes a single parameter which is the value to be inserted at the end of the vector.
<br/><br/>

Syntax:

Example, using a vector "v1", and a value to be inserted of "99".
```cpp
v1.push_back(99);
```
Adds a new element with a value of "99" to the end of the vector.

<br/><br/>
<p align="center">
<img width="681" height="293" src="images\videos\Cpp11\vector_push_back.jpg" title="Vector.push_back() Example">
</p>
<br/><br/>




This example is a complete program using the vector push_back() function to add a new element to the end of a vector.
```cpp
#include<iostream>
#include<vector>

int main()
{
std::vector<int> numbers{1,2,3,4,5,6};
numbers.push_back(99);

for( v : numbers)
    std::cout << v << " ";

return 0;
}
```
Output: 1 2 3 4 5 6 99
