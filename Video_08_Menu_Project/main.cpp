#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <limits>
#include "datatypes.h"

void printMenu();
int getMenuItem();
int printPlaceholder (int);
int goodbye();

int main()
{

    int sel;
    int ret = 0;
    do
    {
        sel = getMenuItem();
        switch(sel)
        {
            case 1: ret = print_data_types();
                break;
            case 2: ret = printPlaceholder(2);
                break;
            case 3: ret = printPlaceholder(3);
                break;
            case 4: ret = printPlaceholder(4);
                break;
            case 5: ret = printPlaceholder(5);
                break;
            case 6: ret = printPlaceholder(6);
                break;
            case 7: ret = printPlaceholder(7);
                break;
            case 8: ret = printPlaceholder(8);
                break;
            case 9: ret = printPlaceholder(9);
                break;
            case 0: ret = goodbye();
                break;
            default:
                    system("cls");
                    std::cout << "Invalid Selection, try again!";
                    Sleep(2000);
                    ret = 1;
        }
    }while(ret != 0);


    return 0;
}


void printMenu()
{
    system("cls");
    std::cout << "\t\t\tMain Menu\n" << std::endl;
    std::cout << "Please select from one of the following choices:\n" << std::endl;

    std::cout << "1. Print a useful reference of C++ variable data types and their ranges." << std::endl;
    std::cout << "2. Placeholder for project 2." << std::endl;
    std::cout << "3. Placeholder for project 3." << std::endl;
    std::cout << "4. Placeholder for project 4." << std::endl;
    std::cout << "5. Placeholder for project 5." << std::endl;
    std::cout << "6. Placeholder for project 6." << std::endl;
    std::cout << "7. Placeholder for project 7." << std::endl;
    std::cout << "8. Placeholder for project 8." << std::endl;
    std::cout << "9. Placeholder for project 9." << std::endl;
    std::cout << "0. Quit Program." << std::endl;
}

int getMenuItem()
{
    printMenu();

    int item;
    std::cout << "\nEnter the number of your selection (1-9): ";
    std::cin >> item;
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 99;
    }


    return item;
}

int printPlaceholder (int x)
{
    system("cls");


    std::string message = "\nYou selected menu item";
    message.insert(23," " + std::to_string(x) + ".\nThis function will be coming soon.\nReturning to main menu");
    for(unsigned int i = 0; i < message.size(); i++)
    {
        Sleep(20); // pauses program (sleeps) for specified time in ms
        std::cout << message[i];
    }
    for(int i=0; i<5; i++)
    {
        std::cout <<".";
        Sleep(300);
    }

    return 1;
}
int goodbye()
{
    system("cls");
    std::cout << "\nGoodbye" << std::endl;
    for(int r=3; r>=0; r--)
    {
        std::cout << r << "...";
        Sleep(500);
    }
    system("cls");
    return 0;

}














































//int getMenuItem()
//{
//    // Get menu item from user, verify its an integer and return value
//    // TODO: Modify to also accept q for program quit.
//
//    printMenu();
//    int item;
//    std::cout << "\nEnter the number of your selection (1-9): ";
//    std::cin >> item;
//    if (cin.fail())
//    {
//        std::cin.clear();
//        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//        return 99;
//    }
//
////    while(cin.fail())
////    {
////        if (item =='q'){
////            return 0;
////        }
////        std::cout << "Invalid entry, try again..." << std::endl;
////        std::cout << "\nEnter the number of your selection (1-9): ";
////        std::cin.clear();
////        //std::cin.ignore(256,'\n');
////        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
////        std::cin >> item;
////    }
//    return item;
//}
//
//
//void printPlaceholder(int menu)
//{
//    system("cls");
//    std::string message = "\nYou selected menu item";
//    message.insert(23," " + std::to_string(menu) + ".\nThis function will be coming soon.\nReturning to main menu");
//    for(unsigned int i = 0; i < message.size(); i++)
//    {
//        Sleep(20); // pauses program (sleeps) for specified time in ms
//        std::cout << message[i];
//    }
//    for(int i=0; i<5; i++)
//    {
//        std::cout <<".";
//        Sleep(300);
//    }
//
//
//}
//
//
//void goodbye()
//{
//    system("cls"); // Clear screen and run little goodbye countdown
//    std::cout << "\nGoodbye!  " << std::endl;
//    for(int r=3; r>=0; r--)
//    {
//        std::cout << r << "...";
//        Sleep(500);
//    }
//    system("cls");
//}
