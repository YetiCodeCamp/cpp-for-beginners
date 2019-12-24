#include <iostream>


/*      Syllabus

        Lesson 5 - Blocks, Scope, and the Scope Resolution Operator

        -   discuss the concept of "scope" in computer programming, and more specifically within C++.
        -   relate this to the concept of a block within C++, and why it matters.
        -   look at some examples of declaring variables within different blocks, or scopes, and how
            this limits the variable's visibility and use.
        -   briefly look at a simple class, which we be covered much more extensively in the next video,
            and also two different methods of accessing a class's data members (variables)
        -   demonstrate how to access and utilize variables that are defined within a different scope

*/



    /*  Scope

        - The first topic I want to cover, is of the concept of scope.

        - The noun form of scope is generally defined as an extent, or range, of which something can be viewed or acted upon.

        Local Variables - normally accessible only to its local scope, whether that is a function, if statement or other type of block

        Global Variables - accessible from any part of the program, they are normally declared at the top of a program.
                           regardless of where they are declare, they must be outside of all other functions or blocks


            // Scope Resolution Operator ::  - allows access to variables outside of our current scope.
    */





int a = 50;                     // Global Variable - accessible to entire program by default

class MyClass
{
public:
    static int a;               // This variable 'a' is a member of the MyClass class
};

namespace red
{
    int a = 500;                // This variable 'a' is part of the 'red' name-space.

    namespace green
    {
           int a = 3250;        // This variable 'a' is part of the 'green' name-space,
                                // which is also  part of the red name-space
    }
}

int MyClass::a = 100;           // Static members must be explicitly defined

int main()
{
    int a = 5;                  // Local variable, same as what we been using up to now.
    int w = MyClass::a;         // MyClass::a refers to the data member a inside MyClass.
    //MyClass obj;
    //int w = obj.a;
    int x = red::green::a;      // red::green::a refers to the name inside green, which is inside red.
    int y = red::a;             // red::a refers to the name inside the red name-space.
    int z = ::a;                // ::a refers to the name in the global name-space.

    std::cout<< a << "\n"  << MyClass::a << "\n" << x << "\n" << red::a << "\n" << z <<std::endl;

    return 0;
}



