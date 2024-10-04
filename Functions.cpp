// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double calcDistance(int x1, int y1, int x2, int y2) {
    return sqrt((pow((x2 - x1), 2) + pow((y2 - y1), 2)));
}

double calcRadius(int x1, int y1, int x2, int y2) {
    return calcDistance(x1, y1, x2, y2);
}

double calcCircumference(double r) {
    return 2 * M_PI * r;
}

double calcArea(double r) {
    return M_PI * pow(r, 2);
}

int main()
{
    int x1;
    int y1;
    int x2;
    int y2;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

    cout << "Radius: ";
    cout << calcRadius(x1, y1, x2, y2) << endl;

    cout << "Circumference: ";
    cout << calcCircumference(calcRadius(x1, y1, x2, y2)) << endl;

    cout << "Area: ";
    cout << calcArea(calcRadius(x1, y1, x2, y2)) << endl;
}
