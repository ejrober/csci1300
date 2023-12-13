#include <iostream>
#include <string>

using namespace std;

int main(){
    double area, base_one, base_two, height;
    cout << "What is the length of one of the parallel sides?" << endl;
    cin >> base_one;
    cout << "What is the length of the other parallel side?" << endl;
    cin >> base_two;
    cout << "What is the height of the trapezoid?" << endl;
    cin >> height;
    area = 0.5 * (base_one + base_two) * height;
    string str_area = to_string(area);
    cout << "The trapezoid has an area of " + str_area + " units." << endl;
}