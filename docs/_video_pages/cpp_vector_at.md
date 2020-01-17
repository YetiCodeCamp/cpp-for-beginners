---
title: C++ Vector at() function
permalink: /cpp-vector-at
---

## C++ Vector at() Function
<br/>
The C++ vector.at() returns a reference to an element within the vector.

Syntax:

Example, using a vector "v1" and position "p".
```cpp
v1.at(p);
```
Returns the value in the element at position p.
<br/>
![Vector.at() Example](images\videos\Cpp11\vector_at.jpg)

The following example uses a vector v1, and a position p to return a specific element.
```cpp
int p = 3;
vector<int> v1 {11,12,13,14,15};
cout << v1.at(p);
```
Output: 14


This example is a complete program using at() to print the contents of a vector. We are also using the size() to determine the number of elements in the vector to iterate through.

```cpp
#include<iostream>  
#include<vector>  

int main()  
{  
  std::vector<int> v1{1,2,3,4,5,6};  
  for(int i=0;i<v1.size();i++)  
      std::cout<<v1.at(i) << " ";  
  return 0;   
}  
```
Output: 1 2 3 4 5 6

<br/><br/>