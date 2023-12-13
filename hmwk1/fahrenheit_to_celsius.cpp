#include <iostream>

using namespace std;

int main(){
    double fahrenheit, celsius;
    cout << "Enter temperature in fahrenheit:" << endl;
    cin >> fahrenheit;
    celsius = (fahrenheit -32) * (5.0 / 9.0);
    cout << "The temperature is " << celsius << " degrees Celsuis." << endl;
    return 0;

}