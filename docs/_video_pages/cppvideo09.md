---
title: Video 09 - Arrays
permalink: /cppvideo09
---

## This is the companion page for the C++ for Beginners Video 09 –  Arrays
<br/>
<br/>
<p align="center">
<iframe width="560" height="315" src="https://www.youtube.com/embed/NeKR3P0PtTo" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</p>
<br/>
<br/>
In this 9th video of the C++ for beginners series we will look at using arrays. Arrays are used to store multiple data elements of the same type in a single data structure. You can think of it as storing a collection of variables, all in one place.

An example might be if we were writing a program to work on some type of weather data, say the daily high temperature from the past year, we would need to define a lot of separate variables to hold all of this data. An array (and later a Vector) will allow us to do that and be able to easily access the data by working with one structure, instead of 100’s of individual variables.

Note, I was originally planning to do this video and the next lesson on Vectors all in one video, but it quickly became too long. Instead I have broke them it out into separate videos, Video 9 Arrays, Video 10 Multidimensional Arrays and Introduction to Vectors, and Video 11 Vectors.

I should also note that for this video I made an exception to my rule of avoiding using namespace std. I felt the code looks a bit clearer to understand, and by now I am sure you understand the namespace concept and know what's going on.

Also note that besides the usual cout, endl, the sort and greater functions are also part of the standard namespace, so be sure to prefix them with std:: if you want to try using them the normal way.

<br/><br/>

## Hexadecimal
<br/><br/>
In this video I discuss memory addressing in the context of using arrays. We will cover memory more in-depth in a later video, but for now I just want to give the basics of using hexadecimal in case you are confused on the memory addresses being in hex.

We normally use a decimal, or a base 10, numbering system in our daily life. You probably don’t give much thought to it anymore, but it basically works by using placeholders.
<br/><br/>
<p align="center">
<img width="700" height="407" src="images\videos\Cpp09\decimal.jpg" title="Decimal Number System">
</p>
<br/><br/>

In decimal, we can write up to the number 9 in a single column, but when we go to 10 we need to move over one column to the left, insert a 1 and start the right column over again at 0. We need to use the 0 as a placeholder to indicate this is 10 and not 1. We repeat this pattern every time a column overflows, at 100, 1000, etc.

Hexadecimal is a base 16 number system. It works the same way, except we don’t move over to the left column until we get to 16. So we can use the first column to write digits 0-15, before having to move over to the left.

Also, since our digits only go up to 9, we need to represent values 10, 11, 12, 13, 14, and 15 some other way. The letters A, B, C, D, E, and F were selected to fill this role. So a simple decimal to hexadecimal conversion table is:

<table>
  <tr>
    <th>Hex:</th>
    <th>0</th>
    <th>1</th>
    <th>2</th>
    <th>3</th>
    <th>4</th>
    <th>5</th>
    <th>6</th>
    <th>7</th>
    <th>8</th>
    <th>9</th>
    <th>A<br></th>
    <th>B<br></th>
    <th>C<br></th>
    <th>D<br></th>
    <th>E</th>
    <th>F<br></th>
  </tr>
  <tr>
    <td>Decimal:</td>
    <td>0</td>
    <td>1</td>
    <td>2</td>
    <td>3</td>
    <td>4</td>
    <td>5</td>
    <td>6</td>
    <td>7</td>
    <td>8</td>
    <td>9</td>
    <td>10</td>
    <td>11</td>
    <td>12</td>
    <td>13</td>
    <td>14</td>
    <td>15</td>
  </tr>
</table>

So using the example from the video, when we went from 1008 to 100C, we were moving up 4 addresses, or 4 bytes. Going up from 100C another 4 bytes, we need to shift a digit into the left column, and start over at 0 in the right, so we went to address 1010.


<br/>
<br/>

## Arrays
<br/><br/>
![C++ Arrays](images\videos\Cpp09\C++-Arrays.jpg)
<br/><br/>
In C++ we can use arrays to store multiple values of similar data within one structure, so we can refer to one entity instead of multiple individual variables.

So using the weather program example from earlier, instead of creating 365 variables to hold daily high temperatures, we can create a single array called something like "dailyHighs".

We would declare it similar to the slide above, with the following syntax.

```cpp
double dailyHighs[365];
```
Instead of initializing it all up front, we would just declare its size of needing 365 elements. They would be indexed starting with 0, so we would have 0-364 indexes referring to the 365 elements in the array. Remember the last index in the array will always be the number of elements - 1 (n-1).

So then to assign values each day we would need to refer to the index corresponding to the day we wished to access.

```cpp
dailyHighs[30] = 72.9;
```
This would assign 42.9 to the 30th index position in the array, which in our example represents day 31 for the year, January 31st.

<br/><br/>
![C++ Arrays](images\videos\Cpp09\myFirstArrayExample.jpg)
<br/><br/>
Using the array example we used in the video (shown above) we can see when we create an array we are defining a contiguous block of memory space to hold the array elements. In the above slide, we declared an 10 element array of type integer(int), which reserves 4 bytes per element or 40 bytes in total. In our fictional dailyHigh array in the section just above, we used a data type of double which is 8 bytes in size, and we would need 365 x 8 bytes, or 2920 bytes (2.92 Kbyte) of memory to hold the array.

Using the myFirstArray slide example for simplicity, we see the address of the first element is using memory address 1000, the second element uses 1004 and so on. The forth element displays as 100C, as memory address are expressed in hexadecimal unit's, so this would equate to 12 addresses from the start of the array.
