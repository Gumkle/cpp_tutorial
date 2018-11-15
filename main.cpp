#include <iostream>
#include "extern_file.cpp"

//Defining constants - no semicolons, #define driective 
#define AGE 18

//Defining constants - types, semicolons, const keyword
const int HEIGHT = 180;
using namespace std;

int exampleForVariableScope = 5;

int exampleForExternStorage;
extern void write_extern();

// main() is where program execution begins.
int main() {
     
    /*
        It appears that if you put single string in
        multiple lines then it won't work.

        Update: you can do this by using string 
        literals
    */
    //cout << "Learning project. \
    //Nothing interesting here, if you know C++ already, keep moving"<<endl;

    /*
        Enum declares type color, in which you can
        declare only values red, grren, blue and creates
        new variable of this type named c
    */
    //enum color {red, green, blue} c;

    /*
        New variable types:
        void - absence of type
        wchar_t - wide character type (whatever, they
        say it's better not to use for now)

        rvalue and lvalue:
        rvalue - can stand at the left and the right
            side of an assignment (variable),
        lvalue - can stand only at the right side of
            an assignment (constant, like 20)
    */

    /*
        Local vars overwrite global ones.
        local - scope in declared function,
        global - declared outside functions, scope
        in whole file
    */
    int exampleForVariableScope = 10;

    /*
        Storage classes
        auto - default, local variables,
        register - local variables, MAY be stored in
            register instead of RAM,
        static - keep variable alive between enters to
            scope instead of destroying and setting it
            again and again, and therefore keep its
            value between scopes, can be applied to
            global vars
        extern - make global variable visible to all 
            files in the whole program. It has to be
            defined without extern in source file and
            with extern in file containing.
        mutable - mutable member of and object can be
            overriden by const member function (or something,
            for further explanation).
        
    */

    /*
        Operators:
            - bitwise: 
                - & AND
                - | OR
                - ^ XOR
                - ~ "flips bits" (0011 to 1100)
                - A << 2 moves A value 2 bits to left
                - A >> 2 moves A value 2 bits to right
            - misc:
                - sizeof variable;
                - condition? true: false;
                - type(otherType) - casting vars
                - & returns address of var
                - * points to var (represented by address)
    */

    /*
        Function call types:
            - 
    */

    exampleForExternStorage = 10;
    write_extern();

}