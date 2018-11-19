#include <iostream>
#include "second_extern.cpp"

using namespace std;
extern int exampleForExternStorage;

void write_extern() {
    cout << "Number is " << exampleForExternStorage << endl;
}