#include<iostream>
using namespace std;

int main(){
    char oper;       //Variable initialization
    double number1, number2; 

    cout<<"Enter the first number: ";
    cin>>number1;       //Getting user input num1

    cout<<"Enter the operator [+,-,/,*]: ";
    cin>>oper;         //Getting user input

    cout<<"Enter the second number: ";
    cin>>number2;      //Getting user input num2

    if(oper=='+'){ //checking condition using if statement
        cout<<number1<<"+"<<number2<<"="<<number1+number2<<endl;
    }
    else if(oper=='-'){
        cout<<number1<<"-"<<number2<<"="<<number1-number2<<endl;
    }
    else if(oper=='*'){
        cout<<number1<<"*"<<number2<<"="<<number1*number2<<endl;
    }
    else if(oper=='/'){
        cout<<number1<<"/"<<number2<<"="<<number1/number2<<endl;
    }
    else{
        cout<<"Error! The operator is not correct..Try again"<<endl;
    }
    return 0;
}
