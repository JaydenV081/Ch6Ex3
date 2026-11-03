/*
Developer: Jayden Veloz
File Name: Ch6Ex3.cpp
Date: 11 / 2 / 26
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double fallingDistance(int time);

int main() {
    // Displays menu
    cout << "Time (in seconds)" << setw(25) << right << "Distance (in meters)" << endl;
    cout << "------------------------------------------" << endl;

    // Loop for time. Starts at 1s and ends at 10s
    for (int time = 1; time <= 10; time++) {
        // Calculates distance by following the function
        double distance = fallingDistance(time);

        // Displays time and distance values
        cout << setw(8) << right <<  time << setw(5) << left << " s";
        cout << setw(15) << "" << setw(3) << right << distance << setw(5) << left << " m" << endl;
    }

    return 0;
}

// Function that calculates distance using time and constant gravity
// Returns the value to the double variable
double fallingDistance(int time) {
    const double gravity = 9.8;
    return (gravity * pow(time, 2))/2;
}