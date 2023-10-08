//Develop a program that calculates the area of a circle using a constant value for pi (π). 
//Use appropriate constants for radius and pi.
#include<iostream>
using namespace std;
int main(){

    float pi=3.14,radius,area;
    cout<<"enter the radius of the circle "<<endl;
    cin>>radius;
    area=(pi*radius*radius);
    cout<<"area= "<<area;    
}