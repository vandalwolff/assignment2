/*Build a program that takes a user's age as input and uses if-else statements to 
determine if the user is a child, teenager, adult, or senior citizen.*/
#include<iostream>
using namespace std;
int main(){
int age;
cout<<"enter your age "<<endl;
cin>>age;
if(age<13&&age>=1){
    cout<<"child";
}
else if(age>=13&&age<=19){
 cout<<"teenager";
}
else if(age>19&&age<=60){
 cout<<"adult";
}
else if(age>60&&age<=100){
 cout<<"senior citizen";
}
else{
 cout<<"dead";
}}