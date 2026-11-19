#include <iostream>
#include "patientconsent.h"
#include <limits>
using namespace std;

void patientconsent()
{
    int choice;

    cout << endl;
    cout << "PATIENT CONSENT" << endl;
    cout << "Your personal and medical information will be" << endl;
    cout << "collected to help provide healthcare navigation" << endl;
    cout << "and connect you with a GP." << endl << endl;

    cout << "1. Agree" << endl;
    cout << "2. Disagree" << endl;
    cin >> choice;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (choice == 1)
    {
        cout << "patient consent";
    }
    else if (choice == 2)
    {
        cout << "END PROGRAM" << endl;
    }
    else
    {
        cout << "Invalid choice. Please choose either 1 or 2." << endl;
    }
}


