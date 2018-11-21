#include <iostream>
#include "extern_file.cpp"
#include "main_menu/main_menu.cpp"
#include "data_structures.cpp"

//Defining constants - no semicolons, #define driective 
#define AGE 18

//Defining constants - types, semicolons, const keyword
const int HEIGHT = 180;
using namespace std;

int exampleForVariableScope = 5;

int exampleForExternStorage;
extern void dataStructuresPresentation();
extern void write_extern();
// externs can be chained, file included by included file is also
// visible and therefore its method can be executed
extern void secondExternTest();

/*
    Functions have to be declared before they are used, but you can
    initialize them (their body) after usage
*/
void referenceFunctionExample(int &a, int &b);

// main() is where program execution begins.
// arguments in main represent arguments sent from console:
//  argc is for argument count, and argv argumen vector
int main(int argc, char *argv[]) {
    // secondExternTest();
    // MainMenu mainMenu;

    // cout<<"Liczba argumentow: "<<argc<<endl;
    // for(int i=0; i<argc; i++){
    //     cout<<"Argument "<<i<<": "<<argv[i]<<endl;
    // }

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
    // int exampleForVariableScope = 10;

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
    // exampleForExternStorage = 10;
    // write_extern();

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
            - value - copies value to function body,
            - pointer - copies address of a variable
                to function body and in there references
                the original var at this address
            - reference - copies reference to a value
                to the function body
    */
    // int a = 10;
    // int b = 15;
    // // values storing memory addresses have to be of type*
    // int *aRef = &a;
    // int *bRef = &b;
    // // addresses 
    // cout<<aRef<<", "<<bRef<<endl;
    // // values pointed by addresses
    // cout<<*aRef<<", "<<*bRef<<endl;
    // // values
    // cout<<a<<", "<<b<<endl;
    // referenceFunctionExample(a, b);
    // // values changed by the function
    // cout<<a<<", "<<b<<endl;   

    /*
        Arrays
        type name [size];
    */
    // // One way of declaring array
    // string animals [] = {"dog", "cat", "another dog"};
    // // Another way of declaring array
    // string names [5];
    // names[0] = "Dawid";
    // names[1] = "Sara";
    // names[2] = "Ula";
    // names[3] = "Lech";
    // names[4] = "Wiesława";
    // for(int i = 0; i<3; i++){
    //     cout<<animals[i]<<endl;
    // }

    /*
        Pointers
            - if there's no exact address to be assigned to pointer
            at the moment of declaration then it is good thing to 
            assign NULL to it, 
            - you can use operators +, -, ++, -- with them,
            - you can make an array of pointers *ptr[3];
            - you can make pointer to pointer (type**),
            - 
    */

   /*
        IO controll
            Libs:
                - iostream - cin, cout, cerr, clog,
                - iomanip - formatted I/O, parameters,
                - fstream - file processing
            cerr:
                - every stream to it displays immiediately,
            clog:
                - each insertion is held in a buffer until buffer is
                filled or flushed
   */
  dataStructuresPresentation();
}

void referenceFunctionExample (int &a, int &b){
    a = 15; 
    b = 20;
}