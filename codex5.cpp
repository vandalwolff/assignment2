//Create a program that takes user input as a floating-point number, 
//converts it to an integer using typecasting, and displays both the original and the typecasted values.
#include<iostream>
using namespace std;
int main(){
    float a;
    int b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    b=(int)a;
    cout<<"original number: "<<a<<endl;
    cout<<"typecasted number: "<<b;
}