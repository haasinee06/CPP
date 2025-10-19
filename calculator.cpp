#include<iostream>
using namespace std;
template<class T>
class calculator{
    private :
    T num1, num2;
    public :
    calculator(T n1, T n2){
        num1= n1;
        num2= n2;
    }
    T add() { return num1+num2; }
    T subtract() { return num1-num2; }
    T multiply() { return num1*num2; }
    T divide() {
        if(num2 !=0)
        return num1/num2;
        else{
            cout<<"error! division by zero"<<endl;
            return 0;
        }
    }
    };
    int main()
    {
        calculator<int>intcalc(10, 5);
        cout<<"int calculation : "<<endl;
        cout<<"addition = " <<intcalc.add()<<endl;
        cout<<"subtraction = " <<intcalc.subtract()<<endl;
        cout<<"multiplication = " <<intcalc.multiply()<<endl;
        cout<<"division = " <<intcalc.divide()<<endl;
        cout<<"------------------------"<<endl;
        calculator<double>doublecalc(10.5,2.5);
        cout<<"double calculation : "<<endl;
        cout<<"addition = "<<doublecalc.add()<<endl;
        cout<<"subtraction = "<<doublecalc.subtract()<<endl;
        cout<<"multiplication = "<<doublecalc.multiply()<<endl;
        cout<<"division = "<<doublecalc.divide()<<endl;
        return 0;
    }
