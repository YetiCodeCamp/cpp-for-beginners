#include <iostream>
#include <string>
#include <windows.h>

std::string getName();
void printMessage(std::string);


int main()
{
    std::string message = "Hello world!\nThis is my 1st C++ program!";
    //                     012345678901 23456789012345678901234567890
    //                     0         1          2         3         4

    std::cout << "Do you want to run version 1 or 2 of this program? (Enter 1 or 2): ";
    int x;

    if (std::cin >> x && x==2)
    {
        std::string name = getName();
        message.erase(13,1);
        message.insert(13, "My name is " + name + " and t");
    }


    printMessage(message);

    return 0;
}


std::string getName()
{
    //Queries user for input (name) and returns a string value
    std::string n;
    std::cout << "Enter your name:" << std::endl;
    while(!(std::cin >> n))
    {
        std::cin.clear();
    }
    return n;
}

void printMessage(std::string m)
{
    std::cout << std::endl;

    for(int i = 0; i < m.size(); i++)
    {
        Sleep(50); // pauses the program
        std::cout << m[i];
    }

    std::cout << std::endl;
}
