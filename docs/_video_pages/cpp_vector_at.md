---
title: C++ Vector at() function
permalink: /cpp-vector-at
---

## C++ Vector at() Function

The C++ vector.at() returns a reference to an element within the vector.

Syntax:

Example, using a vector "v1" and position "p".
```cpp
v1.at(p);
```
Returns the value in the element at position p.
![Vector.at() Example](images\videos\cpp11\vector_at.jpg)

The following example uses a vector v1, and a position p to return a specific element.
```cpp
int p = 3;
vector<int> v1 {11,12,13,14,15};
cout << v1.at(p);
```
Output: 14
