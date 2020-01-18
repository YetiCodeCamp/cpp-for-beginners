---
title: C++ Vector back() function
permalink: /cpp-vector-back
---

## C++ Vector back() Function
<br/>
The C++ vector.back() function returns a reference to the last element of a vector. This function does not take any parameters.

Syntax:

Example, using a vector "v1".
```cpp
v1.back();
```
Returns the value in the last element of the vector.

<br/><br/>
<p align="center">
<img width="681" height="293" src="images\videos\Cpp11\vector_back.jpg" title="Vector.back() Example">
</p>
<br/><br/>


This example is a complete program using the vector back() function to return the value of the last element in a vector.
```cpp
#include<iostream>
#include<vector>

int main()
{
std::vector<std::string> month{"Jan","Feb","Mar","Apr","May","Jun",
                               "Jul","Aug","Sep","Oct","Nov","Dec"};
std::cout<<month.back();

return 0;
}  
```
Output: Dec

<br/><br/>
