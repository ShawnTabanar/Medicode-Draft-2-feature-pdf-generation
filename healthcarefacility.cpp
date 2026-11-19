#include <iostream>
#include "healthcarefacility.h"
#include <string>

using namespace std;

void healthcarefacility()   

{
    int facilityChoice;
    int doctorChoice;
    string number;

    cout << endl;
    cout << "=================================" << endl;
    cout << "   CHOOSE A HEALTHCARE FACILITY" << endl;
    cout << "=================================" << endl;

    cout << "1. Public Hospital" << endl;
    cout << "2. Private Hospital" << endl;
    cout << "3. Back to Main Menu" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> facilityChoice;


    // PUBLIC 

    if (facilityChoice == 1)
    {
        cout << endl;
        cout << "AVAILABLE PUBLIC DOCTORS" << endl;

        cout << "1. Pogi si Darwin" << endl;
        cout << "2. POGI SI DARWIN" << endl;
        cout << "3. Ewerwerwer" << endl;

        cout << "Select Doctor: ";
        cin >> doctorChoice;

        switch (doctorChoice)
        {
            case 1:

                number = "09170000001";

                break;

            case 2:

                number = "09170000002";

                break;

            case 3:

                number = "09170000003";

                break;

            default:

                cout << "Invalid doctor selection!" << endl;

                return;
        }
    }


    // PRIVATE 

    else if (facilityChoice == 2)
    {
        cout << endl;
        cout << "AVAILABLE PRIVATE DOCTORS" << endl;

        cout << "1. Example Doctor D" << endl;
        cout << "2. Example Doctor E" << endl;
        cout << "3. Example Doctor F" << endl;

        cout << "Select Doctor: ";
        cin >> doctorChoice;

        switch (doctorChoice)
        {
            case 1:

                number = "09170000004";

                break;

            case 2:

                number = "09170000005";

                break;

            case 3:

                number = "09170000006";

                break;

            default:

                cout << "Invalid doctor selection!" << endl;

                return;
        }
    }


    // BACK TO MAIN MENU

    else if (facilityChoice == 3)
    {
        cout << endl;
        cout << "Returning to Main Menu..." << endl;

    }


    // EXIT

    else if (facilityChoice == 4)
    {
        cout << endl;

        cout << "Exiting the program..." << endl;
    }


    // INVALID FACILITY

    else
    {
        cout << "Invalid selection!" << endl;

        return;
    }


    // SELECTED DOCTOR

    cout << endl;
    cout << "Selected Doctor!" << endl;
    cout << "Doctor's Contact Number: " << number << endl;

    cout << "Dialing the Doctor" << endl;
}

