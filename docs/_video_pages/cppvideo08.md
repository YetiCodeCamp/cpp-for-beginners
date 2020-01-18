---
title: Video 08 - Menu Project and Introduction to the Switch Statement
permalink: /cppvideo08
---

## This is the companion page for the C++ for Beginners Video 08 - Menu Project and Introduction to the Switch Statement
<br/>
<br/>
<p align="center">
<iframe width="560" height="315" src="https://www.youtube.com/embed/Bxp3TUkECyg" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</p>
<br/>
<br/>

In this 8th video of the C++ for beginners series we will begin working on our Menu Program, which will serve as the foundation to our eventual Portfolio Project. We will also look at using the switch statement and how it is useful for functions like building a menu.
<br/><br/>

![Introduction](images\videos\Cpp08\Lesson08_WhiteBoard_Intro.jpg)
<br/><br/>

So first off we will begin creating the basic framework for the portfolio project program. Your portfolio will eventually consist of some of the better example we cover going through this series and this project will offer a way to display your programs all from one location.

We will be making a simple menu which we can call each individual example program from within one framework.
<br/><br/>

![Switch Statement Overview](images\videos\Cpp08\Lesson08_WhiteBoard_02.jpg)
<br/><br/>

The switch statement is somewhat like an if statement, except we can match one or more cases and execute the code within. The above slide shows the basic flowchart of the switch statement and a code example.

Using the example, if x were set to 3, case 1 and case 2 would be skipped and case 3 would be matched. The reference code by case 3 would then be ran. If the case also contained a break statement, the switch would be exited and the program would resume at any statements beneath the switch statement.

If none of the cases matched, we can also use a default case, which any code would be ran before leaving the switch.
<br/><br/>

![Switch Statement Information](images\videos\Cpp08\Lesson08_WhiteBoard_03.jpg)
<br/><br/>

Some facts about using the switch statement:

The switch expression {switch(x)} will be evaluated just once upon entry into the switch.

The value of the expression is compared with each case, once a match is found the code within the case block is executed.

You cannot have duplicate case values, for instance case 2: and later another case 2: is not allowed.
<br/><br/>

![Menu Program Layout](images\videos\Cpp08\Lesson08_WhiteBoard_01.jpg)
<br/><br/>

The slide above illustrates the basic framework of our menu project.

It will initially consist of four functions, a do_while loop, and a switch statement to printout a menu and allow the user to choose from the list which program they would like to run.
