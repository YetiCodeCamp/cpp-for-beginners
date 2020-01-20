---
title: Video 11 - C++ Pointers
permalink: /cppvideo12
---

## This is the companion page for the C++ for Beginners
## Video 12 – C++ Pointers
<br/><br/>
<p align="center">
  {youtube video code goes here}
</p>
<br/><br/>

In this video we will go over C++ pointers, what they are and how we can use them.

First, remember that every variable or object will have a memory address associated with it. When we learned about arrays back in video, we briefly illustrated this concept.

<br/><br/>
<p align="center">
<img width="600" height="423" src="images\videos\Cpp12\address.jpg" title="Address & Example">
</p>
<br/><br/>


A pointer is a variable that stores the memory address of an object. Pointers are used extensively in both C and C++ for three main purposes:

    to allocate new objects on the heap,
    to pass functions to other functions
    to iterate over elements in arrays or other data structures.

    Like a variable, a pointer must be declared with the datatype of the variable or object it will point to, this is known as its base-type.

A pointer is denoted by using the * symbol as shown below.

```cpp
int  *  i_ptr;    // pointer to an integer
double *d_ptr;    // pointer to a double
char*   ch_prt    // pointer to character
```
Note that the position of the asterisk can very, as long as it is between the datatype and variable name it's a valid form of declaring a pointer.

Symbols used with pointers:

Ampersand "&" symbol - Address Operator - Used to obtain the memory address of a variable or object.
Asterisk "\*" symbol - Besides being used as an operator in multiplication, when used with pointers it is used to create a pointer variable and as a dereference operator.

The avoid confusion, keep in mind the * serves two different purposes when used with pointers.

    When used in a declaration (double* ptr), it creates a pointer variable that holds an address.
    When not being used in a declaration, it acts as a dereference operator to return the value at an address.

```cpp
int num = 547;
int * p = & num;
std::cout << "The address of num is: " << p << std::endl;
std::cout << "The address of num is: " << &num << std::endl;

```
Output:
The address of num is: 0x6dfee8 <br/>
The address of num is: 0x6dfee8 <br/><br/>
Notice they both return the same address location.<br/>
(Note: the actual address returned will be different on your computer depending on the memory location set aside to hold the variable num.)
