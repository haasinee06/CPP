#include<iostream>
using namespace std;
class Shape {
	public:
		virtual void calculate()
		{
			cout<<"Area of your shape ";
		}
		virtual ~Shape()
		{
			cout<<"shape destructor call\n";
		}
};
class Rectangle : public Shape {
	public:
		int width,height,area;
		void claculate()
		{
			cout<<"Enter width of Rectangle: ";
			cin>>width;
			cout<<"Enter Height of Rectangle: ";
			cin>>height;
			area=height*width;
			cout<<"Area of Rectangle: "<<area<<"\n";
		}
};
class Square : public Shape {
	public:
		int side,area;
		void claculate()
		{
			cout<<"Enter one side of your square: ";
			cin>>side;
			area=side*side;
			cout<<"Area of Square: "<<area<<"\n";
		}

virtual ~Square()
   {
   	cout<<"Square destructor call\n";
   }
};
int main()
{
	Shape* S;
	Rectangle r;
	S=&r;
	S->calculate();
	S=&r;
	S->calculate();
	Square sq;
	S=&sq;
	S->calculate();
	return 0;
}
