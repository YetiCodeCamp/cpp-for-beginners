---
title: C++ Vector shrink_to_fit() function
permalink: /cpp-vector-shrink
---

## C++ Vector shrink_to_fit() Function
<br/>
The C++ vector.shrink_to_fit() discards excess capacity to match the vector's current size. This function takes no parameters.
<br/><br/>

Syntax:

Example, using a vector "v1".
```cpp
v1.shrink_to_fit();
```
Reduces vector capacity to fit current size.
<br/><br/>

The below example is a complete program using vector shrink_to_fit() function to remove the excess capacity of the vector.

```cpp
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> v1 (50);
  std::cout << "Capacity of v1: " << v1.capacity() << std::endl;

  v1.resize(8);
  std::cout << "Capacity of v1: " << v1.capacity() << std::endl;

  v1.shrink_to_fit();
  std::cout << "Capacity of v1: " << v1.capacity() << std::endl;

  return 0;
}
```
Output: <br/>
Capacity of v1: 50 <br/>
Capacity of v1: 50 <br/>
Capacity of v1: 8

The vector v1 is initially sized to hold 50 elements at which point the vector capacity is also 50. The vector is then resized to only 8 elements, but the capacity remains unchanged to hold 50 elements. The shrink_to_fit function is called to reduce the excess capacity to meet the current needs of only 8 elements, which the last output statement verifies.

<br/><br/>
