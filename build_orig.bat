@echo off
cls

set DRIVE_LETTER=%1:
set PATH=%DRIVE_LETTER%\MinGW\bin;%DRIVE_LETTER%\MinGW\msys\1.0\bin;c:\Windows;c:\Windows\system32

g++ -c -I.\CSC2110 Password.cpp
g++ -c -I.\CSC2110 PasswordDriver.cpp

g++ -L.\CSC2110 -o  Password.exe PasswordDriver.o Password.o -lCSC2110







