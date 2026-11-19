
@echo off
cd /d "%~dp0"

echo Building PDFGen...
gcc -std=c11 -c PDFgen/pdfgen.c -o PDFgen/pdfgen.o

if errorlevel 1 (
    echo PDFGen compilation failed.
    pause
    exit /b 1
)

echo Building MEDICODE...
g++ -std=c++14 -g combination.cpp medicodebanner.cpp mainmenu.cpp exitprogram.cpp healthcarefacility.cpp patientconsent.cpp patientpersonalinfo.cpp generalquestions.cpp pdfgenerator.cpp PDFgen/pdfgen.o -o MEDICODE.exe

if errorlevel 1 (
    echo MEDICODE compilation failed.
    pause
    exit /b 1
)

echo.
echo MEDICODE built successfully!
pause
