---
title: C++ Vector assign() function
permalink: /cpp-vector-assign
---

## C++ Vector assign() Function
<br/>
The C++ vector.assign() function assigns new values to the vector replacing any existing values.

It is important to keep in mind that the vector assign function will erase any existing data before assigning the new values, if you want to keep the existing value you may want to consider using the vector insert() instead.
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
    <td>The position just beyond the last element to be copied.</td>
  </tr>
  <tr>
    <td>count</td>
    <td>Number of times (or copies of) a element is to be inserted into the vector.</td>
  </tr>
  <tr>
    <td>value</td>
    <td>Value of the element being inserted into the vector.</td>
  </tr>
  <tr>
    <td>init_list</td>
    <td>The initializer_list containing the elements to be assigned.</td>
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

This example uses the assign function with the count and value parameters. The first parameter, '10' is the count or number of elements we want to insert into the vector. The second parameter, '42' is the actual value we want to assign. This example will assign 10 elements of value 42 into the vector.
```cpp
std::vector<int> v1;
v3.assign(10, 42);
for( v : v1 )
    std::cout << v1 << " ";
```
Output: 42 42 42 42 42 42 42 42 42 42
<br/><br/><br/>

This second example uses the assign function with the first and last parameters to assign the value of another vector (v1) to vector v2. We are also using the vector begin and end functions to retrieve the starting and ending values of vector v1 and using them in the vector assign() parameter list.
```cpp
std::vector<int> v1 {1,2,3,4,5};
std::vector<int> v2;
v2.assign(v1.begin(), v1.end());
for( v : v2 )
    std::cout << v2 << " ";
```
Output: 1 2 3 4 5
<br/><br/><br/>

This third and last example uses the assign function with an initializer list. Here we are simply assigning 5 values to the vector, which will replace the existing values that were assigned to the vector in the declaration.
```cpp
std::vector<int> v1 {1,2,3,4,5};
v1.assign({ 5, 6, 7, 8, 9 });
for( v : v1 )
    std::cout << v1 << " ";
```
Output: 5 6 7 8 9

<br/><br/>
