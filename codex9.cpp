/*Develop a program that uses a while loop to continuously prompt the user for
a password until the correct password is entered. (You can decide the correct password*/
#include<iostream>
using namespace std;
int main(){
string password="ilikerolls";
string enter;
cout<<"enter password "<<endl;
cin>>enter;

while(enter!=password){
    cout<<"re-enter password"<<endl;
    cin>>enter;
    }
    cout<<"login success";
}