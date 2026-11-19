#include <iostream>
#include "medicodebanner.h"
#include "mainmenu.h"
#include "exitprogram.h"
#include "healthcarefacility.h"
#include "patientconsent.h"
#include "patientpersonalinfo.h"
#include "generalquestions.h"
#include <windows.h> 
#include "patientdata.h"
#include "pdfgenerator.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    PatientData patient;
    SymptomData symptoms;

    medicodebanner();

    patientconsent();

    patientpersonalinfo(patient);

    generalquestions(symptoms);

    healthcarefacility();

    mainmenu(patient, symptoms);

    exitprogram();

    return 0;
}