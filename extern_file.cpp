#include <iostream>
using namespace std;
extern int exampleForExternStorage;

void write_extern() {
    cout << "Number is " << exampleForExternStorage << endl;
}