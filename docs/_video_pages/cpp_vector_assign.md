---
title: C++ Vector assign() function
permalink: /cpp-vector-assign
---

## C++ Vector assign() Function
<br/>
The C++ vector.assign() function assigns new values to the vector replacing any existing values.
<br/><br/>

<table>
  <tr>
    <th>Parameter</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>first</td>
    <td>The first element in the range of elements to be copied.</td>
  </tr>
  <tr>
    <td>last</td>
    <td>The osition just beyond the last element to be copied.</td>
  </tr>
  <tr>
    <td>count</td>
    <td>Number of times a element is to be inserted into the vector.</td>
  </tr>
  <tr>
    <td>value</td>
    <td>Value of the element being inserted into the vector.</td>
  </tr>
  <tr>
    <td>init_list</td>
    <td>The initializer_list containing the elements to insert.</td>
  </tr>
</table>
<br/><br/>
Syntax:

Example usage of a vector "v1" and the assign function:
```cpp
v1.assign(count, value);
v2.assign(first, last);
v3.assign({ 10, 11, 12, 13 });
```



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
br/><br/>

```cpp
std::vector<int> v1 {1,2,3,4,5};
std::vector<int> v2;
v2.assign(v1.begin(), v1.end());
for( v : v2 )
    std::cout << v2 << " ";
```
Output: 1 2 3 4 5
br/><br/>

```cpp
std::vector<int> v1 {1,2,3,4,5};
v1.assign({ 5, 6, 7, 8, 9 });
for( v : v1 )
    std::cout << v1 << " ";
```
Output: 5 6 7 8 9
