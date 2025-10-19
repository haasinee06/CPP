#include<iostream>
using namespace std;
//class defination
class student{
	private:
		string name;
		int age;
		public:
			void setDetails(string n, int a)"{
			name = n;
			age  = a;
}
void displayDetails(){
	cout<<"Student name :"<<name<<end1;
	cout<<"student age :"<<age<<end1;
}
};
int main(){
	student s1;
	s1.setdetails("Hasini",18);
	s1.displaydetails();
	return 0;
}
