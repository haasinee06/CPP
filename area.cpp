#include<iostream>
using namespace std;
class shape{
	public:
		shape(int l,int w)
		{
			length = l;
			width = w;
		}
		int get_area()
		{
			cout<<"This is call to parent class area\n";
			return 1;
		}
		protected:
			int length,width;
};
class square: public shape{
	public:
		square(int l=0,int w=0)
		: shape(l,w)
		{
		}
		int get_area()
		{
			cout<< "square area: " <<length*width<<'\n';
			return (length*width);
		}
};
class Rectangle:public shape{
public:
	Rectangle(int l=0,int w=0)
	: shape(l,w)
		{
		}
		int get_area()
		{
			cout<< "Rectangle area: " <<length*width<<'\n';
			return (length*width);
		}
};
int main()
{
	shape* s;
	square sq(5, 5);
	Rectangle rec(4, 5);
	s = &sq;
	s-> get_area();
	s=&rec;
	s->get_area();
	return 0;
}   

