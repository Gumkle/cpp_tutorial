#include <iostream>
using namespace std;

class MainMenu {
    private: 
        static const int OPTIONS_QUANTITY = 10;

        int initializeMainMenuLoop() {
            int input;
            cin >> input;
            return input;     
        }

        void writeOutMenuOptions() {
            for(int i = 0; i < MainMenu::OPTIONS_QUANTITY; i++){
                cout << "Opcja numer "<< i << endl;
            }
        }

        bool validateMainMenuChoice(int choice){
            return (choice < 10);
        }

        void parseMainMenuChoice(int choice){
            cout << "Option number " << choice << " has been choosen" << endl;
        }

    public:
        void displayMenu() {
            system("clear");
            cout << "C++ general overwiev program. Please select topic: " << endl;
            writeOutMenuOptions();
            int response = initializeMainMenuLoop();

            try {
                if(validateMainMenuChoice(response)) {
                    parseMainMenuChoice(response);
                }
                else {
                    throw invalid_argument("Given opiton is invalid");
                }
            } catch (const invalid_argument& e) {
                cout << e.what() << endl;
            }

        }
        MainMenu() {
            displayMenu();   
        }
};