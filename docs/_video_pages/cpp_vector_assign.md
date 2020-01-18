---
title: C++ Vector assign() function
permalink: /cpp-vector-assign
---

## C++ Vector assign() Function
<br/>
The C++ vector.assign() function assigns new values to the vector replacing any existing values.
<br/><br/>

Syntax:

Example, using a vector "v1" and position "p".
```cpp
v1.assign(first, last);
```
Returns the value in the element at position p.


<br/><br/>
<p align="center">
<img width="656" height="608" src="images\videos\Cpp11\vector_assign.jpg" title="Vector.assign() Example">
</p>
<br/><br/>


```cpp
std::vector<int> v1;
v3.assign(10, 42);
for( v : v1 )
    std::cout << v1 << " ";
```
Output: 42 42 42 42 42 42 42 42 42 42


```cpp
std::vector<int> v1 {1,2,3,4,5};
std::vector<int> v2;
v2.assign(v1.begin(), v1.end());
for( v : v2 )
    std::cout << v2 << " ";
```
Output: 1 2 3 4 5

```cpp
std::vector<int> v1 {1,2,3,4,5};
v1.assign({ 5, 6, 7, 8, 9 });
for( v : v1 )
    std::cout << v1 << " ";
```
Output: 5 6 7 8 9
