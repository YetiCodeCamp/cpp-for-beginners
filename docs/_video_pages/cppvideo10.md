---
title: Video 10 - Multidimensional Arrays and Introduction to Vectors
permalink: /cppvideo10
---

# This is the companion page for the C++ for Beginners Video 10 – Multidimensional Arrays and Intro to Vectors

In this 10th video of the C++ for beginners series we will look at using multidimensional arrays. I will also be covering the auto keyword for data types, and utilizing the range-based for statement. We wrap up with a quick intro to vectors. I will be covering vectors more in-depth in the next video.

![Multidimensional Array Example](videos\Cpp10\Lesson10_Multi_Array.jpg)

Multidimensional Arrays allow us to store and utilize data in more ways that resemble real world usage. You can think of a two dimensional array as sort of a table of data, with rows and columns making up the array elements. We will be going over a two-dimensional array example and how we can access the data inside.

The auto Keyword

I also briefly go over the auto keyword. The auto keyword allows us to forgo a specifying a data type declaration for variables and lets the compiler assign it at compile time. The compiler does this type inference by looking at the value(s) assigned to the variable or object.

For example:
```cpp
auto x = 17;
```
The compiler will deduce x should be an integer based upon the fact we assigned it a literal integral value, in this case 17.
```cpp
auto pi = 3.14159;
```
The compiler will deduce pi should be a double based upon the fact we assigned it a floating point value, in this case 3.14159.
Range-based for statement

Similar to the ‘for’ loop, the range-based for statement allows us an easy way to iterate through a collection of items, like lists, arrays, or vectors. I will be going over an example and will begin utilizing this format over the standard for loop, especially when it comes to iterating over objects to print their output. Regular for loops still have their place, however, so don’t think of it as a replacement as much as an alternative in certain situations.

Finally, the video will wrap up with a quick introduction to vectors. We will cover creating a simple vector example and showing a few different methods to access the vector elements and print them out to the screen. The next video will more extensively cover vectors, but I just wanted to give a quick introduction before moving into more complex explanations.
