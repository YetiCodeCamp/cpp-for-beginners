---
title: Video 03 - Variables and Functions
permalink: /cppvideo03
---

## This is the companion page for the C++ for Beginners  
## Video 03 –  Variables and Functions
<br/>
<br/>
In this video we cover variable, how we can declare and use them to represent variable bits of data in our programs. We also take a look at how we can put code in functions to help break up similar operations into seperate secitons of code.

### Lesson 3 - Variables and Functions
<p align="center">
<iframe width="560" height="315" src="https://www.youtube-nocookie.com/embed/NGI_fB9uP0s" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>  
</p>
<br/>


Logical Operators:  && AND,  || OR,  ! NOT

Assignment Operators: "=" assigns the value on the right to the variable on the left.  Ex:  int a = 10;

There are also +=. -=, \*=, /=, and %= assignment operators.

```cpp
int a = 5;
a += 5;   // a is now equal to 10, this operator adds 5 to a's original value
          //then assigns the new sum back to 'a'.
int b = 10;
b -= 5;   // b is now equal to 5, this operator subtracts 5  from b's original
          //value then assigns the result back to 'b'.
int c = 5;
c *= 5;   // c is now equal to 25, this operator multiplies 5  to c's original
          //value then assigns the result back to 'c'.
```

Functions:
Declaration: the functions name, return type, and parameters (if any).
Definition: the body of the function (code to be executed).

Functions are declared in the format:

return-type functionName(parameters)  

Function Declaration Example:
```cpp
// returns an int, name is myFunction, and accepts two parameters.
int myFunction(param1, param 2)
{
  {code to execute;}
}
``

Variable Declaration:
```cpp
int a;
```
Creates a variable named 'a' that is of type int (integer).

Variable Initialization:
```cpp
a = 22;
```
Previously declared variable 'a' is assigned the value of '22'.

Variable Declaration and Initialization:  
```cpp
float pi = 3.14159;
```
Creates a new variable of the float type named pi and is assigned the value 3.14159


The 'if' statement is used to execute a block of C++ code if a condition evaluates to true.
```cpp
if(5>0)
  cout << "The condition is true" << endl;
```
<br/><br/>
