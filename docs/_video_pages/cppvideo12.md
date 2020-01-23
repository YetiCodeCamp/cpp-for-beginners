---
title: Video 12 - C++ Pointers
permalink: /cppvideo12
---

## This is the companion page for the C++ for Beginners
## Video 12 – C++ Pointers
<br/><br/>
<p align="center">
  <iframe width="560" height="315" src="https://www.youtube.com/embed/i9UMcaMADTg" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</p>
<br/><br/>

In this video we will go over C++ pointers, what they are and how we can use them.

First, remember that every variable or object will have a memory address associated with it. When we learned about arrays back in video 8, we briefly illustrated this concept.

<br/><br/>
<p align="center">
<img width="600" height="423" src="images\videos\Cpp12\address01.jpg" title="Address & Example">
</p>
<br/><br/>
In the above image we can see we have two variables, 'i' an integer and 'd' a double. They both have a memory address associated with them that points to the first byte of data they occupy. Variable 'i' uses 4 bytes of data and variable 'd' uses 8 bytes since it is of type double.

We have up until now mainly accessed a variable by it's name. Using the above example we would access the value located at memory location 0x1100 by referencing the name we gave the variable, in this case 'i'. We can use the ampersand symbol to return variable 'i's address instead of it's value.

A pointer is a variable that stores the memory address of an object. Pointers are used extensively in both C and C++ for three main purposes:

- to allocate new objects on the heap  
- to pass functions to other functions  
- to iterate over elements in arrays or other data structures  

Like a variable, a pointer must be declared with the datatype of the variable or object it will point to, this is known as its base-type.

A pointer is denoted by using the * symbol as shown below.

```cpp
int  *  i_ptr;    // pointer to an integer
double *d_ptr;    // pointer to a double
```
Note that the position of the asterisk can vary, as long as it is between the datatype and variable name it's a valid form of declaring a pointer.

It is somewhat of a convention to place the * right after the datatype such as `int* p;` when declaring a pointer to be able to more easily differentiate it from its usage as a dereference operator `*p` when we want to obtain "the value of" a pointers address reference.
<br/><br/>

Symbols used with pointers

<br/><br/>
<p align="center">
<img width="700" height="401" src="images\videos\Cpp12\address04.jpg" title="Address & Example">
</p>

<br/>
Ampersand "&" symbol - Address Operator - Used to obtain the memory address of a variable or object. You can think of it as 'the address of" operator.
Asterisk "\*" symbol - Besides being used as an operator in multiplication, when used with pointers it is used to create a pointer variable and as a dereference operator.


The avoid confusion, keep in mind the * serves two different purposes when used with pointers.

- When used in a declaration `double* ptr`, it creates a pointer variable that holds an address.
- When not being used in a declaration, it acts as a dereference operator to return the value at an address.  


```cpp
int num = 547;
int * p = & num;
std::cout << "The address of num is: " << p << std::endl;
std::cout << "The address of num is: " << &num << std::endl;
```
Output: <br/>
The address of num is: 0x6dfee8 <br/>
The address of num is: 0x6dfee8 <br/><br/>
Notice they both return the same address location.<br/>
(Note: the actual address returned will be different on your computer depending on the memory location set aside to hold the variable num.)
<br/><br/>

The  Ampersand & symbol also has two meanings depending on where it is used:

- When used in a declaration `int& ref`, it creates a reference to a variable.
- When used outside of a declaration it means "the address of" the variable or object.

```cpp
int num = 547;
int& ref = num;
std::cout << "The address of num is: " << &num << std::endl;
std::cout << "The address of ref is: " << &ref << std::endl;
```
Output: <br/>
The address of num is: 0x6dfee8 <br/>
The address of ref is: 0x6dfee8 <br/><br/>
Notice they both return the same address location. By making a reference, we are simply making an alias of the variable we are referencing, in this case the variable num. We can now also refer to it using the name ref. Unlike pointers than can change, once a reference is declared it is static.

<br/><br/>
