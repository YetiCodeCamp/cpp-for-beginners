---
title: C++ Vector swap() function
permalink: /cpp-vector-swap
---

## C++ Vector swap() Function
<br/>
The C++ vector.swap() function exchanges the elements specified in two vectors. This function takes another vector as a parameter.
<br/><br/>

Syntax:

Example, using vectors "v1" and "v2".
```cpp
v1.swap(v2);
```
Swaps the contents of v1 with that of v2.

<br/><br/>
<p align="center">
<img width="681" height="738" src="images\videos\Cpp11\vector_swap.jpg" title="Vector.swap() Example">
</p>
<br/><br/>




This example is a complete program using the vector swapk() function to swap the contents of v1 with v2.
```cpp
#include<iostream>
#include<vector>

void prtVec(const std::vector<auto> &vec, std::string n="")
{
        if (n!="")
            std::cout << n << " is: ";
        for(auto v : vec)
            std::cout << v << " ";
        std::cout << "\n" <<std::endl;
}

int main()
{
std::vector<int> v1 {1,2,3,4,5,6};
std::vector<int> v2 {94,95,96,97,98,99};

std::cout << "Before swap:\n\n";
prtVec(v1, "v1");
prtVec(v2, "v2");

v1.swap(v2);

std::cout << "After swap:\n\n";
prtVec(v1, "v1");
prtVec(v2, "v2");

return 0;
}

```
Output:<br/><br/>

Before swap: <br/><br/>

v1 is: 1 2 3 4 5 6 <br/><br/>

v2 is: 94 95 96 97 98 99 <br/><br/>

After swap: <br/><br/>

v1 is: 94 95 96 97 98 99 <br/><br/>

v2 is: 1 2 3 4 5 6


<br/><br/>
