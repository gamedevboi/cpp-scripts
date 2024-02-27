#include <iostream>

using namespace std;

int main() {
    cout << "Enter the Temperature in Farenheit: ";
    double f_temp;
    cin >> f_temp;
    double c_temp = 5 * (f_temp - 32) / 9;
    cout << "The Temperature in Celsius is: " << c_temp;

}