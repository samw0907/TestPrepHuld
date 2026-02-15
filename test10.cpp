/*
 * File: temperature_converter.cpp
 * Task: Convert Celsius to Fahrenheit and Kelvin
 * Task:
Write a program that converts temperature from Celsius to Fahrenheit and Kelvin. The program should:

Ask the user to input a temperature in Celsius
Convert it to both Fahrenheit and Kelvin
Print all three temperatures with labels

Formulas:

Fahrenheit = (Celsius × 9/5) + 32
Kelvin = Celsius + 273.15

Expected Output Example:
Enter temperature in Celsius: 25
25.0°C = 77.0°F = 298.15K
 */

#include <iostream>
using namespace std;

int main() {
    double TempC;
    double TempF;
    double TempK;

    cout << "Enter temperature in Celsius: " << endl;
    cin >> TempC;
    
    TempF = (TempC * 9 / 5 + 32 );
    TempK = (TempC + 273.15);

    cout << TempC << "°C = " << TempF << "°F = " << "K = " << TempK << "K" << endl;
    
    return 0;
}