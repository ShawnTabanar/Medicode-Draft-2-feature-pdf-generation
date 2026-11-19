
#pragma once

#include <string>
using namespace std;

struct PatientData
{
    string patientID;
    string name;
    string age;
    string sex;
    string address;
    string civilStatus;

    string historyPresentIllness;
    string operations;
    string immunizations;
    string allergies;
    string hospitalizations;
    string maintenanceMeds;
    string othersMedical;

    string bronchialAsthma;
    string diabetesMellitus;
    string hypertension;
    string pulmonaryTuberculosis;
    string othersFamily;

    string smoker;
    string alcoholicBeverageDrinker;
    string workEnvironmentalHazards;

    string menarche;
    string menstrualHistory;
    string gravida;
    string para;
    string lastMenstrualPeriod;
    string menopause;
    string othersOBGyne;
};

struct SymptomData
{
    string duration;
    string severity;
    string impact;
    string progression;
    string warningSigns;
    string symptoms;
    string medications;
    string concernSummary;
};
