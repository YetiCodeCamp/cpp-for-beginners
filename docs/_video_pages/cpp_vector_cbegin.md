---
title: C++ Vector cbegin() function
permalink: /cpp-vector-cbegin
---

## C++ Vector cbegin() Function
<br/><br/>

The C++ vector.cbegin() function returns a constant iterator to the first element of a vector. This function takes no parameters.

If the vector is empty, the returned iterator will be equal to end.

While similar to begin(), the cbegin() cannot be used to modify the content of an object to which it is pointing even if object itself is not a constant.
<br/><br/>

Syntax:
```cpp
v1.cbegin();
```
Returns a constant iterator to the first element of a vector

<br/><br/>
<p align="center">
<img width="700" height="202" src="images\videos\Cpp11\vector_cbegin_cend.jpg" title="Vector.cbegin() Example">
</p>
<br/><br/>

This example demonstrates the type of iterator returned when using the begin() and cbegin() functions. Notice that begin() returns a constant iterator only when the object it is pointing at is constant, while cbegin returns a constant iterator regardless of the object it is pointing to.
```cpp
std::vector<int> v1;
const std::vector<int> const_v2;

v1.begin();         // returns an iterator
v1.cbegin();        // returns a const_iterator

const_v2.begin();   // returns a const_iterator
const_v2.cbegin();  // returns a const_iterator
```
<br/><br/><br/>

This example is a complete program using vector the begin() function to print the contents of a vector. We are modifying the value the iterator points to before printing out the value.
```cpp
#include<iostream>
#include<vector>

int main()
{
  std::vector<int>v1{11,12,13,14,15,16,17,18,19};
  std::vector<int>::iterator itr;

  for(itr = v1.begin(); itr != v1.end(); itr++)
  {
      * itr = * itr - 10;
      std::cout << * itr << " ";
  }
  return 0;
}
```
Output: 1 2 3 4 5 6 7 8 9

<br/><br/>

This program is similar to the above example, except it is using a constant iterator used with cbegin and cend functions to loop through the vector and print out the results without trying to modify the data.

```cpp
#include<iostream>
#include<vector>

int main()
{
  std::vector<int>v1{11,12,13,14,15,16,17,18,19};
  std::vector<int>::const_iterator c_itr;

  for(c_itr = v1.cbegin(); c_itr != v1.cend(); c_itr++)
  {
      std::cout << * c_itr << " ";
  }

  return 0;
}
```
Output: 11 12 13 14 15 16 17 18 18

However, if we try to modify the value the iterator is pointing to as we did in the begin example above, we get an error as we can only read the constant and not try to modify its value.
```cpp
#include<iostream>
#include<vector>

int main()
{
  std::vector<int>v1{11,12,13,14,15,16,17,18,19};
  std::vector<int>::const_iterator c_itr;

  for(c_itr = v1.cbegin(); c_itr != v1.cend(); c_itr++)
  {
    * c_itr = * c_itr - 10;
      std::cout << * c_itr << " ";
  }

  return 0;
}
```
Output: Unable to compile

<br/><br/>
