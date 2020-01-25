---
title: C++ Vector begin() function
permalink: /cpp-vector-begin
---

## C++ Vector begin() Function
<br/><br/>

The C++ vector.begin() function returns an iterator to the first element of a vector. This function takes no parameters.

If the vector is empty, the returned iterator will be equal to end().
<br/><br/>

Syntax:
```cpp
v1.begin();
```
Returns an iterator to the first element of a vector

<br/><br/>
<p align="center">
<img width="700" height="202" src="images\videos\Cpp11\vector_begin_end.jpg" title="Vector.begin() Example">
</p>
<br/><br/>

This example uses the assign function with the first and last parameters to assign the value of another vector (v1) to vector v2. We are using the vector begin and end functions to retrieve the starting and ending elements of vector v1 and using them in the vector assign() parameter list.
```cpp
std::vector<int> v1 {1,2,3,4,5};
std::vector<int> v2;
v2.assign(v1.begin(), v1.end());
for( v : v2 )
    std::cout << v2 << " ";
```
Output: 1 2 3 4 5
<br/><br/><br/>

This example is a complete program using vector the begin() function to print the contents of a vector. We are also using the vector end() function to determine the number of elements in the vector to iterate through.

```cpp
#include<iostream>
#include<vector>

int main()
{
  std::vector<int> v1{1,2,3,4,5,6};

  for(std::vector<int>::iterator itr = v1.begin();itr !=v1.end();itr++)
      std::cout << * itr << " ";

  return 0;
}
```
Output: 1 2 3 4 5 6

<br/><br/>



<br/><br/>
