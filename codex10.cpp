/*Create a program that uses a loop to find and display the first 5 prime numbers. 
Use the break statement to exit the loop once all prime numbers are found.*/
//first 5 prime no.s are 2,3,5,7,11
#include<iostream>
using namespace std;
int main(){
int i,j,cnt=0;
for(i=2;true;i++)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
{
cnt++;

}
}
if(cnt==2){
    cout<<i<<" ";
}
if(i==12){break;}
cnt=0;
}
}