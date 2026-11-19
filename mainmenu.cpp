#include <iostream>
#include "mainmenu.h"
#include "pdfgenerator.h"

using namespace std;

void mainmenu(const PatientData &patient, const SymptomData &symptoms)
{
    int choice;

    cout << endl;
    cout << "========================================" << endl;
    cout << "              MAIN MENU" << endl;
    cout << "========================================" << endl;

    cout << "1. REQUEST A DOCTOR" << endl;
    cout << "2. PATIENT PROFILE" << endl;
    cout << "3. PRINT PATIENT SUMMARY" << endl;
    cout << "4. EXIT" << endl;

    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "general ques" << endl;
            break;

        case 2:
            break;

        case 3:
            generatePatientPDF(patient, symptoms);
            break;

        case 4:
            cout << "exiting program..." << endl;
            break;

        default:
            cout << "Please choose a valid option." << endl;
            break;
    }
}