#include<iostream>
using namespace std;
template <typename T>
T getMax( T a,T b){
	return (a>b)?a:b;
}
template <typename T>
void mySwap(T &x, T &y){
	T temp = x;
	x=y;
	y = temp;
}
int main()
{
	int a = 3, b = 7;
    double c = 3.5, d = 7.8;
    char e = 'g', f = 'e';

    cout << "Before swapping: " << a << " " << b << endl;
    mySwap(a, b);
    cout << "After swapping: " << a << " " << b << endl;

    cout << "Before swapping: " << c << " " << d << endl;
    mySwap(c, d);
    cout << "After swapping: " << c << " " << d << endl;

    cout << "Before swapping: " << e << " " << f << endl;
    mySwap(e, f);
    cout << "After swapping: " << e << " " << f << endl;

    return 0;
}

