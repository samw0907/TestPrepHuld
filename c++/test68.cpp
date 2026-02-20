/*
 * File: basic_function_multiply.cpp
 *
 * Exercise 1: Basic Function - Multiply Two Numbers
 * Type: Function definition + return value
 *
 * Objective:
 * Write a function called multiply that takes two integers
 * as parameters and returns their product.
 * Call it from main with values 4 and 7, print the result.
 *
 * Expected Output:
 * 28
 */

#include <iostream>
using namespace std;

double multiply(double a, double b) {
    return a * b;
}


int main() {

    double result = multiply(3, 6);

    cout << result << endl;
    return 0;
}