#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;

    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest (in %): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    interest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << interest << endl;

    return 0;
}

