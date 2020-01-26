---
title: C++ Vector data() function
permalink: /cpp-vector-data
---

## C++ Vector data() Function
<br/>
The C++ vector.data() returns a pointer to the memory array used internally by the vector to store its elements. This function takes no parameters.
<br/><br/>

Syntax:

Example, using a vector "v1" and pointer "ptr".
```cpp
int* ptr = v1.data();
```

It returns a pointer to the first element in the array used internally by vector v1.

<br/><br/>
<p align="center">
<img width="700" height="308" src="images\videos\Cpp11\vector_data.jpg" title="Vector.at() Example">
</p>
<br/><br/>

The following example uses a vector v1, and a pointer 'ptr' to display the value of two different elements within the vector.
```cpp
std::vector<int> v1 {11,12,13,14,15};
int* ptr = v1.data();
std::cout << *ptr << std::endl;
std::cout << *(ptr + 3) << std::endl;
```
Output:<br/>
11<br/>
14

The pointer "ptr" is assigned the address of the first element in the vector , which we can then print out the dereferenced value. In the second output statement we add three to the ptr to increment the address by three integer units (4 bytes each) to output the 4th element's value, again using the dereference operator.

<br/><br/><br/>

This next example is a complete program using the vector data() function to assign the address of the vector v1's first element to a pointer (ptr). We then use the pointer to change the vector element values and then to print out the changed contents of a vector.

```cpp
#include<iostream>
#include<vector>

int main()
{
  std::vector<int>v1{5,6,7,8,9};
  for(v:v1)
    std::cout << v << " ";
  std::cout << "\n\n";

  int* ptr = v1.data();

  \*ptr = 11;
  \*(ptr + 1) = 22;
  \*(ptr + 2) = 33;
  \*(ptr + 3) = 44;
  \*(ptr + 4) = 55;

  for(v:v1)
  {
      std::cout << \*ptr << " ";
      ptr++;
  }

  return 0;
}
```
Output: <br/>
5 6 7 8 9 <br/>

11 22 33 44 55

<br/><br/>
