#include <iostream>
using namespace std;

int main() {
    float km, miles;

    cout << "Enter distance in kilometers: ";
    cin >> km;

    miles = km * 0.621371;
    cout << "Distance in miles = " << miles << endl;
    return 0;
}
