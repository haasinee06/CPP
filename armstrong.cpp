#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, original, remainder, result = 0, n = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    int temp = num;
    while (temp != 0)
	 {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0)
	 {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }
    if (result == original)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not an Armstrong Number" << endl;

    return 0;
}

