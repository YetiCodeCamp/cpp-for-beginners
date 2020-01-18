---
title: C++ Vector empty() function
permalink: /cpp-vector-empty
---

## C++ Vector empty() Function
<br/>
The C++ vector.empty() function returns boolean false if the vector is empty, otherwise returns true if the vector has at least one element. This function does not take any parameters.
<br/><br/>

Syntax:

Example, using a vector "v1".
```cpp
v1.empty();
```
Returns boolean false if v1 is empty, otherwise returns true.


```cpp
std::vector<int> v1;
std::cout << v1.empty();
```
Output:  1

<br/><br/>

This example is a complete program using the vector empty() function to determine if a vector is empty.
```cpp
#include<iostream>
#include<vector>

void prtEmpty(const std::vector<auto> &v, std::string n="")
{
  if (v.empty())
       std::cout << "Vector " << n << " is empty.\n";
  else
       std::cout << "Vector " << n << " is not empty.\n";
}

int main()
{
std::vector<int> v1;
std::vector<int> v2 { 1,2,3};

prtEmpty(v1, "v1");
prtEmpty(v2, "v2");
}
```
Output: <br/>
Vector v1 is empty. <br/>
Vector v2 is not empty.

<br/><br/>
