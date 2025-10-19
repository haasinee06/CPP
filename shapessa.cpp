#include<iostream>
using namesapce std;
class Shape{
	public:
		virtual void draw(){
			cout<<"Drawing a generic shape"<<endl;
		}
};
class circle : public shape{
	public:
		void draw() override{
		cout<<"Drawing a Circle"<<endl;
	}
};
class Rectangle : public Shape{
	public:
		void draw() override{
			cout<<"Drawing a Rectangle"<<endl;
		}
};
class Triangle : public Shape{
	public:
		void draw() override{
			cout<<"Drawing a Triangle"<<endl;
		}
};
int main()
{
	Shape* shapePtr;
	Circle c;
	shapePtr = &c;
	shapePtr->draw();
	Rectangle r;
	shapePtr = &r;
	shapePtr->draw();
	
}
