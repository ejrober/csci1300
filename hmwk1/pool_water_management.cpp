#include <iostream>
#include <string>

using namespace std;

int main(){
    int hours;
    double remaining_inches_of_water_indoorpool, remaining_inches_of_water_outdoorpool;
    cout << "How many hours have passed?" << endl;
    cin >> hours;
    remaining_inches_of_water_indoorpool = 10 - (hours * 0.2) + (hours * 0.5);
    remaining_inches_of_water_outdoorpool = 14 - (hours * 0.3) + (hours * 0.8);
    string str_indoorpool = to_string(remaining_inches_of_water_indoorpool);
    string str_outdoorpool = to_string(remaining_inches_of_water_outdoorpool);
    cout << "The indoor pool has " + str_indoorpool + " inches of water, and the outdoor pool has " + str_outdoorpool + " inches of water." << endl;
}