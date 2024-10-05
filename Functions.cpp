// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double inputPrice() {
    double price;
    cin >> price;
    return price;
}

double calcInterest(double currentPrice, double oldPrice) {
    return (currentPrice - oldPrice) / oldPrice * 100;
}

void outputResult(double currentPrice, double price1YrAgo, double price2YrsAgo) {
    double inflationRate1 = calcInterest(price1YrAgo, price2YrsAgo);
    double inflationRate2 = calcInterest(currentPrice, price1YrAgo);
    cout << "Inflation from 2 years to 1 year ago: " << inflationRate1 << "% " << endl;
    cout << "Inflation from 1 year ago to now: " << inflationRate2 << "% " << endl;
    if (inflationRate1 > inflationRate2) {
        cout << "The inflation rate is decreasing.";
    }
    else {
        cout << "The inflation rate is increasing.";
    }
}
int main()
{
    cout << "Enter current price: ";
    double currentPrice = inputPrice();
    cout << "Enter price one year ago: ";
    double price1YrAgo = inputPrice();
    cout << "Enter price two years ago: ";
    double price2YrsAgo = inputPrice();

    outputResult(currentPrice, price1YrAgo, price2YrsAgo);

}