#include<iostream>
using namespace std;
int multiply(int x,int y);
int  main(){
	int a = 4,b = 5;
	int product=multiply(a,b);
	cout<<"Product="<<product;
	return 0;
}

int multiply(int x,int y){
	return x*y;
}
