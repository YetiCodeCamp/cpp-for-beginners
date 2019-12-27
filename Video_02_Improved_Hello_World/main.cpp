#include <iostream>
#include <string>
#include <windows.h>

// An slightly more advanced version of the Hello World program.

std::string getName();

int main()
{
    std::string greeting = "Hello World!\nThis is my first C++ program.\n";
    //                      012345678901 234567890123456789012345678901 2
    //                      0         1          2         3         4

    std::cout << "Do you want to run version 1 or 2 of this program? (Enter 1 or 2): ";
    int x;
    if (std::cin >> x && x==2)  // if input is an integer and equal to 2
    {
        std::string myName = getName();
        greeting.erase(13, 1);
        greeting.insert(13, "My name is " + myName + " and t");
    }
    std::cout << std::endl;
    for(unsigned int i = 0; i < greeting.size(); i++)
    {
        Sleep(35); // pauses program (sleeps) for specified time in ms
        std::cout << greeting[i];
    }

    return 0;
}

std::string getName()
{
    std::string name;
    std::cout << "\nPlease enter your name: ";
    while(!(std::cin >> name))
    {
        std::cin.clear();
    }

    return name;
}
