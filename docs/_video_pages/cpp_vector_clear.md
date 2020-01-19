---
title: C++ Vector clear() function
permalink: /cpp-vector-clear
---

## C++ Vector clear() Function
<br/><br/>


The C++ vector.clear() function removes (erases) the elements of the vector.

<br/><br/>

Syntax:

Example, using a vector "v1".
```cpp
v1.clear();
```
Erases the elements of the vector v1.

<br/><br/>

This example is a complete program using the vector clear() function to remove the elements in a vector.
```cpp
#include<iostream>
#include<vector>

int main()
{
     std::vector<std::string> v1{"Jan","Feb","Mar","Apr","May","Jun",
                               "Jul","Aug","Sep","Oct","Nov","Dec"};
     for( v : v1 )
          std::cout << v << " ";
     std::cout << "\nSize of v1 is: " << v1.size() << std::endl;

     v1.clear();

     std::cout << "\nContents of v1 after clear: " << std::endl;

     for( v : v1 )
          std::cout << v << " ";
     std::cout << "\nSize of v1 after clear is: " << v1.size() << std::endl;

return 0;
}
```
Output:
Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec <br/>
Size of v1 is: 12 <br/>
<br/>
Contents of v1 after clear: <br/>
<br/>
Size of v1 after clear is: 0

<br/><br/>
