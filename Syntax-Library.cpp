#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Welcome to Keanu's syntax and logic librarry." << endl;
// If you want to edit the item displayed change the index's in the subject vector, dont forget to align everythjing properly with \t.
// If you want to change the number of items per row edit the numberOfItemsPerLine int initlizer to the number of items per lines you want.
    vector<string> subject
        {
        "Looping", "calculus", "bio\t", "biochemistry", "physics", "quan physics", "programer", "XXXXX", "YYYYYY", "ZZZZZZ", "QQQQQ", "Mom\t"
        };
    for (int i {}, numberOfItemsPerLine {5} ; i < subject.size() ; i++) {
        if (i == 0 || i % numberOfItemsPerLine != 0)
            cout << i + 1 <<": " << subject.at(i) << "\t";
        else 
            cout << endl << i + 1 <<": " << subject.at(i) << "\t";
    }
    cout << endl;
    
    int option {};
    do {
        cout << "Please enter the subject that you would like more information on: ";
        cin >> option;
        }
    while (option < 1 || option > subject.size());
        switch (option) {
            case 1: // Looping
                {
                cout << endl; 
                vector<string> subSubject
                    {
                        "for loop", "for loop (ranged based)", "while loop", "do-while loop"
                    };
                    for (int i {}, numberOfItemsPerLine {2} ; i < subSubject.size() ; i++) {
                        if (i == 0 || i % numberOfItemsPerLine != 0)
                            cout << i + 1 <<": " << subSubject.at(i) << "\t";
                        else 
                            cout << endl << i + 1 <<": " << subSubject.at(i) << "\t";
                    }
                 cout << endl;
                 
                 int subOption {};
                 do {
                    cout << "Please enter the subject that you would like more information on: ";
                    cin >> subOption;
                 }
                 while (subOption < 1 || subOption > subSubject.size());
                 break;
                }
            case 2: 
                cout << "YYYYYYY" << endl;
                break;
            default: 
                cout << "Undefined input please try again" << endl;
        }


    cout << endl;
    return 0;
}