#include <iostream>
using namespace std;

class MainMenu {
    public:
        void displayMenu() {
            cout << "C++ general overwiev program. Please select topic: " << endl;
        }
        MainMenu() {
            displayMenu();   
        }
};