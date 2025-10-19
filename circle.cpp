#include <iostream>
using namespace std;
int main() 
{
    float radius, area;
    const float PI = 3.14;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "Area of the circle = " << area << endl;
    return 0;
}

