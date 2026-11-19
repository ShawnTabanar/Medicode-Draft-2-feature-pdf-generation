#include <iostream>
#include <cstdio>
#include <string>
#include "pdfgenerator.h"
#include "PDFgen/pdfgen.h"

using namespace std;

// Adds a line of text to the PDF and moves the next line downward.
void addPDFText(pdf_doc *pdf, const string &text,
                double fontSize, double &positionY)
{
    pdf_add_text(pdf, NULL, text.c_str(),
                 fontSize, 50, positionY, PDF_BLACK);

    positionY -= 20;
}

void generatePatientPDF(const PatientData &patient,
                        const SymptomData &symptomData)
{
    struct pdf_info info = {};

    snprintf(info.creator, sizeof(info.creator), "MEDICODE");
    snprintf(info.title, sizeof(info.title), "Patient Summary");

    pdf_doc *pdf = pdf_create(PDF_A4_WIDTH, PDF_A4_HEIGHT, &info);

    if (pdf == NULL)
    {
        cout << "PDF creation failed!" << endl;
        return;
    }

    pdf_set_font(pdf, "Helvetica");
    pdf_append_page(pdf);

    double positionY = 780;

    // MEDICODE HEADER

    addPDFText(pdf, "MEDICODE", 24, positionY);
    positionY -= 10;

    addPDFText(pdf, "PATIENT SUMMARY", 16, positionY);
    positionY -= 10;

    // PATIENT INFORMATION

    addPDFText(pdf, "PATIENT INFORMATION", 14, positionY);
    positionY -= 5;

    addPDFText(pdf, "Patient ID: " + patient.patientID, 12, positionY);
    addPDFText(pdf, "Name: " + patient.name, 12, positionY);
    addPDFText(pdf, "Age: " + patient.age, 12, positionY);
    addPDFText(pdf, "Sex: " + patient.sex, 12, positionY);
    addPDFText(pdf, "Address: " + patient.address, 12, positionY);
    addPDFText(pdf, "Civil Status: " + patient.civilStatus, 12, positionY);

    positionY -= 15;

    // SYMPTOM SUMMARY

    addPDFText(pdf, "SYMPTOM SUMMARY", 14, positionY);
    positionY -= 5;

    addPDFText(pdf, "Duration: " + symptomData.duration, 12, positionY);
    addPDFText(pdf, "Severity: " + symptomData.severity, 12, positionY);
    addPDFText(pdf, "Impact: " + symptomData.impact, 12, positionY);
    addPDFText(pdf, "Progression: " + symptomData.progression, 12, positionY);
    addPDFText(pdf, "Other Symptoms: " + symptomData.symptoms, 12, positionY);
    addPDFText(pdf, "Warning Signs: " + symptomData.warningSigns, 12, positionY);
    addPDFText(pdf, "Medication/Treatment: " + symptomData.medications, 12, positionY);

    // SAVE PDF

    int result = pdf_save(pdf, "MEDICODE_Summary.pdf");

    pdf_destroy(pdf);

    if (result >= 0)
    {
        cout << "PDF generated successfully!" << endl;
    }
    else
    {
        cout << "PDF generation failed!" << endl;
    }
}