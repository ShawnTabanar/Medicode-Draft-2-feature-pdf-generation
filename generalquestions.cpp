#include <iostream>
#include <string>
#include <limits>
#include "generalquestions.h"

using namespace std;

// Reads a number and checks whether it is within the allowed choices.
int getChoice(int minimum, int maximum)
{
    int choice;

    while (true)
    {
        if (cin >> choice)
        {
            if (choice >= minimum && choice <= maximum)
            {
                return choice;
            }
        }
        else
        {
            if (cin.eof())
            {
                return minimum;
            }

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Invalid choice. Please enter a number from "
             << minimum << " to " << maximum << ": ";
    }
}

void generalquestions(SymptomData &symptomData)
{
    int answers[7] = {};
    int menuChoice;

    const string durations[] =
        {
            "",
            "Today",
            "A Few Days",
            "One Week or Longer",
            "Not Sure"};

    const string severities[] =
        {
            "",
            "Mild",
            "Moderate",
            "Severe"};

    const string impacts[] =
        {
            "",
            "Not at All",
            "Slightly",
            "Moderately",
            "Not Sure"};

    const string progressions[] =
        {
            "",
            "Yes - Becoming more severe",
            "No - Staying the same",
            "Improving - Getting better",
            "Not Sure"};

    const string symptomChoices[] =
        {
            "",
            "Yes",
            "No",
            "Back to Previous Question",
            "Back to Main Menu"};

    const string warningSigns[] =
        {
            "",
            "Difficulty breathing",
            "Chest pain or pressure",
            "Fainting or sudden confusion",
            "Severe allergic reaction",
            "Feeling unsafe or needing immediate mental health support",
            "None of These",
            "Back to Previous Question"};

    const string medications[] =
        {
            "",
            "Yes",
            "No",
            "Not Applicable",
            "Back to Previous Question",
            "Back to Main Menu"};

    // QUESTION 1: DURATION

    cout << endl;
    cout << "How long have you experienced this problem?" << endl;
    cout << "1. Today - Started today" << endl;
    cout << "2. A Few Days - Lasted 1-3 days." << endl;
    cout << "3. One Week or Longer - Lasted at least 7 days." << endl;
    cout << "4. Not Sure" << endl;

    answers[0] = getChoice(1, 4);

    // QUESTION 2: SEVERITY

    cout << endl;
    cout << "How severe is your concern" << endl;
    cout << "1. Mild - Does not greatly affect daily activities." << endl;
    cout << "2. Moderate - Makes some daily activities difficult." << endl;
    cout << "3. Severe - Makes normal daily activities very difficult." << endl;

    answers[1] = getChoice(1, 3);

    // QUESTION 3: IMPACT

    cout << endl;
    cout << "How does this concern affect activities?" << endl;
    cout << "1. Not at All - Daily activities are mostly unaffected." << endl;
    cout << "2. Slightly - Some activities are affected." << endl;
    cout << "3. Moderately - Several activities are difficult." << endl;
    cout << "4. Not Sure" << endl;

    answers[2] = getChoice(1, 4);

    // QUESTION 4: PROGRESSION

    cout << endl;
    cout << "Is your condition getting worse?" << endl;
    cout << "1. Yes - Becoming more severe." << endl;
    cout << "2. No - Staying the same." << endl;
    cout << "3. Improving - Getting better." << endl;
    cout << "4. Not Sure" << endl;

    answers[3] = getChoice(1, 4);

    // QUESTION 5: OTHER SYMPTOMS

    cout << endl;
    cout << "Do you have other symptoms or concerns?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "3. Back to Previous Question" << endl;
    cout << "4. Back to Main Menu" << endl;

    answers[4] = getChoice(1, 4);

    // QUESTION 6: WARNING SIGNS

    cout << endl;
    cout << "Are you experiencing any urgent warning signs?" << endl;
    cout << "1. Difficulty breathing" << endl;
    cout << "2. Chest pain or pressure" << endl;
    cout << "3. Fainting or sudden confusion" << endl;
    cout << "4. Severe allergic reaction" << endl;
    cout << "5. Feeling unsafe or needing immediate mental health support" << endl;
    cout << "6. None of These" << endl;
    cout << "7. Back to Previous Question" << endl;

    answers[5] = getChoice(1, 7);

    // QUESTION 7: MEDICATIONS

    cout << endl;
    cout << "Have you taken any medication or received any treatment for this concern?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "3. Not Applicable" << endl;
    cout << "4. Back to Previous Question" << endl;
    cout << "5. Back to Main Menu" << endl;

    answers[6] = getChoice(1, 5);

    // STORE SELECTED ANSWERS

    symptomData.duration = durations[answers[0]];
    symptomData.severity = severities[answers[1]];
    symptomData.impact = impacts[answers[2]];
    symptomData.progression = progressions[answers[3]];
    symptomData.symptoms = symptomChoices[answers[4]];
    symptomData.warningSigns = warningSigns[answers[5]];
    symptomData.medications = medications[answers[6]];

    // STORE THE COMPLETE SYMPTOM SUMMARY

    symptomData.concernSummary =
        "Duration: " + symptomData.duration +
        "\nSeverity: " + symptomData.severity +
        "\nImpact on Activities: " + symptomData.impact +
        "\nProgression: " + symptomData.progression +
        "\nOther Symptoms: " + symptomData.symptoms +
        "\nUrgent Signs: " + symptomData.warningSigns +
        "\nMedication/Treatment: " + symptomData.medications;

    // MAIN QUESTIONNAIRE MENU

    cout << endl;
    cout << "1. View Symptom Summary" << endl;
    cout << "2. Connect to an Available General Practitioner" << endl;
    cout << "3. View General Health Guidance" << endl;
    cout << "4. Back to Main Menu" << endl;
    cout << "5. Exit" << endl;

    menuChoice = getChoice(1, 5);

    if (menuChoice == 1)
    {
        cout << endl;
        cout << "===============================" << endl;
        cout << "        SYMPTOM SUMMARY" << endl;
        cout << "===============================" << endl;

        cout << symptomData.concernSummary << endl;

        cout << "===============================" << endl;
    }
}