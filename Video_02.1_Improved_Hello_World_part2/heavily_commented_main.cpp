// I created this version of the main.cpp file to help explain the various parts of the program.
// It has the same functionality as the regualr main.cpp file, just with a lot more comments to help beginners out.

// Include statements required for certain functionality

#include <iostream>
#include <string>
#include <windows.h>

// Text following two forward slashes '//' are comments, ignored by the compiler and just for the sake of the human programmer.

// Function Prototypes need to appear above main

std::string getName();
void printMessage(std::string);


// main function the "starting point" of the program

int main()
{
    // Creating a variable named 'message' that is of data type string - for this to run need to have '#include <string>' added at very top of program.
    // We are also assigning the new string variable message with a string of text.

    std::string message = "Hello world!\nThis is my 1st C++ program!";
    //                     012345678901 23456789012345678901234567890   // Numbers are added in comment simply to help count the character positions in the string.
    //                     0         1          2         3         4   // Representing the 10's place


    // Display an output prompt for user asking for information

    std::cout << "Do you want to run version 1 or 2 of this program? (Enter 1 or 2): ";

    // Assign a variable named 'x' which will hold the user response, we are expecting an integer so are using the int data type.

    int x;

    // If statement to accept input and check if it is equal to (==) 2, in this case it will treat any other input the same as a '1'

    if (std::cin >> x && x==2)
    {
        std::string name = getName();                                   // Code inside if statement runs only if true. Calls the getName function and assigns it to variable name.
        message.erase(13,1);                                            // Erases (deletes) the character at index 13 in the string message. In this case it is the capital 'T' (shown above).
        message.insert(13, "My name is " + name + " and t");            // Inserts a new string starting at index 13 and concatenates the contents of the name variable into this new string.
    }


    // Calls printMessage function with the message string used as an input parameter.

    printMessage(message);

    // Returns 0 when main is finished running.

    return 0;
}

// getName function, returns a string takes no input parameters.

std::string getName()
{
    //Queries user for input (name) and returns a string value

    std::string n;
    std::cout << "Enter your name:" << std::endl;

    // while loop to ensure user inputs some value
    while(!(std::cin >> n))
    {
        std::cin.clear();
    }
    return n;
}

// printMessage function, requires a string as a parameter (input) and returns no value (void)

void printMessage(std::string m)
{
    std::cout << std::endl;                 // Simply prints an empty line for test formatting

    // for loop that iterates through the length of the message string (that was assigned as 'm' in paramter)

    for(int i = 0; i < m.size(); i++)
    {
        Sleep(50);                          // pauses the program for 50 milliseconds
        std::cout << m[i];                  // Prints to console the contents of string m at index 'i'
    }

    std::cout << std::endl;
}
