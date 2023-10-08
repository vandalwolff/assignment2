/*Write a program that uses manipulators to format and display the current date and time.
*/
#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
using namespace std;
int main() {
        auto now = chrono::system_clock::now();
    std::time_t currentTime = chrono::system_clock::to_time_t(now);
   
    cout << "Current Date and Time: "<<put_time(localtime(&currentTime), "%d-%m-%Y %H:%M:%S") <<endl;
    }
