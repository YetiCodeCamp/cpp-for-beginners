---
title: Video 13 - C++ Memory Management
permalink: /cppvideo13
---

## This is the companion page for the C++ for Beginners Series
## Video 13 – C++ Memory Management
<br/><br/>


<br/><br/>
<p align="center">
<img width="700" height="776" src="images\videos\Cpp13\Memory.jpg" title="Memory Layout Example">
</p>
<br/><br/>

The computer memory we use when we write, compile, and run our programs can be broken into different groups, called segments:
1. The call stack or simply "stack" where functions and local variables are placed.
2. The heap (also called the free store) is a large chunk of memory set aside for dynamic allocation.
3. The uninitialized data segment (also called the BSS*) where uninitialized global and static variables are placed.
4. The initialized data segment or simply "data segment" is where initialized global and static variables are stored. Note that this can be further subdivided into a read-only and read/write section, with constants assigned into the read-only section.
5. The text (or code) segment is where the compiled program resides in memory. The code segment is typically read-only.

We are going to focus our attention on the first two items, the call stack and the heap as these are the primary areas as programmers we need to be concerned with.


### Stack Memory Allocation

When we create a variable in our programs, we are basically instructing the compiler to set aside some space in computer memory for that variable to reside.

```cpp
int x = 5;
```
The declaration of integer x will (on most systems) allocate 4-bytes of memory to store the variable, with the address of the first byte acting as the address for the variable. We seen this when working with pointers and can easily obtain the address of variable a using the & symbol.

Memory allocation then refers to the process by which the program sets aside memory for the storage of data. The amount of memory set aside is determined by the variables datatype, in the case of x above, it is 4 bytes. A short cause 2 bytes to be allocated, and a double 8 bytes.

The allocation of memory is local, or as we covered before causing the variable x and thus its memory allocation to exist only within its local scope. When the scope ceases to exist, such as with the return of a function, the memory is deallocated and the variable no longer exists.

An example of this can be shown in the program below.
```cpp
#include <iostream>

int* getInt()
{
    int a = 27;
    std::cout << a << std::endl;
    return &a;
}

int main ()
{
    int* x = getInt();
    std::cout << x << std::endl;
    std::cout << * x << std::endl;

    return 0;
}
```
Output:<br/>
27 <br/>
0 <br/>


While variable 'a' exists within the getInt function as we can see with the output, once the function returns the memory is unallocated and we cannot longer reference a's address or value.

The Stack

Locally allocated memory is referred to as stack allocation because programs will utilize this memory as fast accesses.

The call stack is implemented as a stack data structure. We have already seen data structures such as arrays and the stack data structure is another mechanism implemented using the STL or Standard template Library.

The stack can be envisioned as a stack of objects, maybe plates, vinyl records, Compact Disc's, or even boxes of the same size and shape. These objects are held in a container in such a way as to only allow the top object to be removed before access to the next object is possible.

If you have ever been to a cafeteria which uses the spring loaded plate dispensers you have an idea of how this works. Only the top plate is accessible as the rest are stored further down in the mechanism and can only be accessed by removing the top most plate.

The stack works in this way, known as a LIFO (Last In First Out) model, as the last item inserted needs to be the first item removed.

A stack has two primary methods of accessing data:
- push : pushes an item on to the top of the stack.
- pop : pop an item off the top of the stack.

Again, if you think of plates you can easily envision these two processes as either adding a plate to the stack (push), or removing the top plate off the stack (pop).








### Heap Memory Allocation
The Heap segment




The Stack
