@ECHO OFF
REM Clear the screen to show only output of batch file
CLS
REM Nabeel Vally Omar 224235491
REM Computer Science 2A 2025
REM Set path for JDK
SET MinGW=C:\MinGW
SET PATH=%MinGW%\bin;%PATH%;

REM Set Variables
cd..
set PRAC_BIN=.\bin
set PRAC_DOCS=.\docs
set PRAC_SRC=.\src

REM Compiling code
ECHO Trying to compile
g++ %PRAC_SRC%\*.cpp -o %PRAC_BIN%\Main.exe

REM Running code
ECHO Trying to run
CD /D %PRAC_BIN%
main.exe

PAUSE
