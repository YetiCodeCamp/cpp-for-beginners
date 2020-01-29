---
title: Video 07 - Multiple Files
permalink: /cppvideo07
---

## This is the companion page for the C++ for Beginners Series
## Video 07 - Multiple Files
<br/>
<br/>
<p align="center">
<iframe width="560" height="315" src="" data-src="https://www.youtube.com/embed/5n7i7VJCN7I" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</p>
<br/>
<br/>

In this 7th video of the C++ for beginners series we will look at how we can incorporate external files into our programs.

Up until now all of our programs have been contained within one file, main.cpp. This video will go over how we can break our program up into more manageable chunks by moving our functions and classes into their own separate files.

Thus also has the advantage that it will be easier to reuse and incorporate the code into other programs later on if we wish. Instead of rewriting the code, we can just include the source and header files.

<br/><br/>
![Example of moving parts of program to different files](images\videos\Cpp07\Lesson07_WhiteBoard_02.jpg)
<br/><br/>

In the slide above you can see an example of a single file on the left and the same code broken into three separate files on the right. Notice we split the utility class code into two files, utility.h a header file and utility.cpp the source file.

The header file contains a header (or include) guard (see below) that prevents the code from being included into the program multiple times. The header is where the declaration of any variable and functions for the class happen. Think of this a similar to the function and variable declarations you would need to put above the main function in a single file program we have worked with so far.

Notice also, that we will need to include any external headers that our header or source code file will need at the top of our header file as well.

The source file, or cpp file is where the actual definition, or implementation of the code happens. Notice it is named the same as the header file, with just a different extension, 'cpp' instead of 'h'. Notice also that we need to include the header file at the top of the source code file.

Then in our main.cpp file, we now include the header file so we have access to the functions provided by the header and source files, as well as any external headers we need to implement the code as before.
<br/><br/>

### \#Include guards (or header guards)

It is often the case that a header file will include other header files. It is possible then that a source file that includes multiple headers may end up including some headers more than once. If the header file that is included more than once contains definitions, the compiler will fail due to a definition being declare multiple times.

This unwanted behavior of multiple inclusions can be prevented by using "include guards", also known as header guards or macro guards. These guards are implemented by using the preprocessor directives: #define, #ifndef, and #endif.
<br/>

An example of a header guard is shown below:
```cpp
#ifndef UTILITY_H
#define UTILITY_H
  header code....
#endif
```

The directive #ifndef "if not defined" instructs the preprocessor that if the include file is not already defined elsewhere continue on to compile the code block within the if statement, otherwise if it evaluates to false, meaning the file has been included earlier then ignore the remaining code until the endif statement.

The second line, #define, typically follows #ifndef as since the header has not been previously defined within the program, we want to define it so any subsequent usage can be detected.

The actual implementation of the header files follows with an ending #endif directive at the end to indicate the if block is complete.

<br/><br/>
