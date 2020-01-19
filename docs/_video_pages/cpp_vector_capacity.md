---
title: C++ Vector capacity() function
permalink: /cpp-vector-capacity
---

## C++ Vector capacity() Function
<br/><br/>

The C++ vector.capacity() function returns the number of elements the vector has allocated room for in memory. The function does not take a parameter.

<br/><br/>

Syntax:

Example, using a vector "v1".
```cpp
v1.capacity();
```
Returns the elements the vector v1 could contain without allocating more memory space.

<br/><br/>

This example is a complete program using the vector capacity() function to return the number of elements a vector is currently sized for in memory.

```cpp
#include<iostream>
#include<vector>

int main()
{
   std::vector<int> v1 {1};

   std::cout << "Number of current elements v1 has allocated in memory: "
        << v1.capacity( ) << std::endl;

   v1.push_back(2);
   std::cout << "Number of current elements v1 has allocated in memory: "
        << v1.capacity( ) << std::endl;

   v1.push_back(3);
   std::cout << "Number of current elements v1 has allocated in memory: "
        << v1.capacity( ) << std::endl;

   v1.push_back(4);
   std::cout << "Number of current elements v1 has allocated in memory: "
        << v1.capacity( ) << std::endl;

   v1.push_back(5);
   std::cout << "Number of current elements v1 has allocated in memory: "
        << v1.capacity( ) << std::endl;

   v1.pop_back();
   v1.pop_back();
   v1.pop_back();
   v1.pop_back();

   std::cout << "Number of current elements v1 has allocated in memory: "
        << v1.capacity( ) << std::endl;
}
```
Output:
Number of current elements v1 has allocated in memory: 1  
Number of current elements v1 has allocated in memory: 2  
Number of current elements v1 has allocated in memory: 4  
Number of current elements v1 has allocated in memory: 4  
Number of current elements v1 has allocated in memory: 8  
Number of current elements v1 has allocated in memory: 8  


<br/><br/>
