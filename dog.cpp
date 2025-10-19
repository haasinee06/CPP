#include<iostream>
using namespace std;
class Animal {
	public: 
	int legs=4;
};
class Dog:public Animal
{
	public:
		int tail=1;
};
int main(){
	Dog d;
	cout<<"Legs are:"<<d.legs<<endl;
	cout<<"Tails are:"<<d.tail<<endl;
	
}
