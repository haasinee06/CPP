#include<iostream>
using namespace std;
class complex{
private:
int real , img;
public:
	//constructor
complex(int r=0,int i=0){
	real = r;
	img = i;
}	
complex operator+(complex obj){
	complex temp;
	temp.real = real + obj.real;
	temp.img = img + obj.img;
	return temp;
}
void display(){
	cout << real << " + " << img << "i" << endl;
}
};
int main() {
	complex c1(3, 4);
		complex c2(5, 6);
		complex c3 = c1+ c2;
		cout<<"First complex number:";
		c1.display();
		cout<<"second complex number :";
		c2.display();
		cout<<"sum of complex numbers:";
		c3.display();
		return 0;
		}
		
