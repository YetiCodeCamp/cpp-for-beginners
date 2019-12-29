#include <stdio.h>      // C library to perform Input/Output operations
#include <string.h>     // C Strings defines several functions to manipulate C strings and arrays.

// This is a "C" type program and should compile and run in both C and C++, at least it will in CodeBlocks.
// Note the use of C compatible headers above.


/* Structure in "C" Format

- A collection of different data types which are grouped together, each element is called member.
- struct is short for "structured data type".

    keyword name or tag
    struct  MyStruct
    {
        variable a;
        variable b;
        variable c;
    };  Structure (and Classes) end with a semicolon after closing brace.

*/
    // Simple demo structure "MyStruct"
    typedef struct  MyStruct
    {
        int a;
        int b;
        float f;
        char c[30];
    } stc;


int main()
{
    struct MyStruct s = {1, 2, 4.2, "MyString"};                // Assign a contiguous list of members.

    s.f = 3.14159;                                              // We can also change member values after initialization.
    strcpy(s.c, "Designated initializers");

    printf("\n a = %d \n b = %d \n f = %f \n c = %s", s.a, s.b, s.f, s.c);

    stc s2 = {33, 55, 498.12, "TypeDef"};                      // Using typedef

    printf("\n\n a = %d \n b = %d \n f = %f \n c = %s", s2.a, s2.b, s2.f, s2.c);


    return 0;
}






/*  I left the code from the early parts of the video below, in "commented out" form.
    The final code form from the video is shown above.

    Bonus Tip:  If you select all the lines in a grouping below and hit Ctrl+Shift+X it will uncomment them all at once.
                Conversely, if you select a grouping of uncommented code, and hit Ctrl+Shift+C you will comment them all at once.

*/

// Part 1
//
//
//    // Simple demo structure "MyStruct"
//    struct  MyStruct
//    {
//        int a;
//        int b;
//        float f;
//    };
//
//    struct MyStruct s = {1, 2, 4.2};        // contiguous list of members
//
//    printf("\n a = %d \n b = %d \n f = %f", s.a, s.b, s.f);




// Part 2


//    // Simple demo structure "MyStruct"
//    struct  MyStruct
//    {
//        int a;
//        int b;
//        float f;
//        char c[30];
//    };
//
//    struct MyStruct s = {1, 2, 4, "Initial assignment"};        // contiguous list of members
//
//    printf("\n a = %d \n b = %d \n f = %f \n %s", s.a, s.b, s.f, s.c);



// Part 3

//    // Simple demo structure "MyStruct"
//    struct  MyStruct
//    {
//        int a;
//        int b;
//        float f;
//        char c[30];
//    };
//
//    s.f = 3.14159;                                  // We can change member values after initialization
//    strcpy(s.c, "Designated initializers");
//
//    printf("\n\n a = %d \n b = %d \n f = %f \n %s", s.a, s.b, s.f, s.c);


