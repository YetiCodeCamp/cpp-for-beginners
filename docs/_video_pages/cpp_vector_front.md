---
title: C++ Vector front() function
permalink: /cpp-vector-front
---

## C++ Vector front() Function
<br/>
The C++ vector.front() function returns a reference to the first element of a vector. This function does not take any parameters.
<br/><br/>

Syntax:

Example, using a vector "v1".
```cpp
v1.front();
```
Returns the value in the first element of the vector.

<br/><br/>
<p align="center">
<img width="681" height="293" src="images\videos\Cpp11\vector_front.jpg" title="Vector.front() Example">
</p>
<br/><br/>



This example is a complete program using the vector front() function to return the value of the first element in a vector.
```cpp
#include<iostream>
#include<vector>

int main()
{
std::vector<std::string> month{"Jan","Feb","Mar","Apr","May","Jun",
                               "Jul","Aug","Sep","Oct","Nov","Dec"};
std::cout<<month.front();
return 0;
}  
```
Output: Jan

<br/><br/>
