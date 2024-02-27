#include <iostream>
using namespace std;

int main(){
    double sales = 95000;
    double state_tax = sales * 0.04;
    double fed_tax = sales * 0.02;

    cout << "Total Sales: " << sales << endl
        << "State Tax: " << state_tax << endl
        << "Federal Tax: " << fed_tax <<  endl;

    return 0;
}