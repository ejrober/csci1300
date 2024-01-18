#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2, int distance_type);

int main(){

    double x1, y1, x2, y2;
    int distance_type;

    cout << "Enter distance type:" << endl;

    cin >> distance_type;

    if((distance_type < 1) || (distance_type > 2)){
        cout << "Invalid distance type!" << endl;
        return -1;
    }

    cout << "Enter x1:" << endl;

    cin >> x1;

    cout << "Enter y1:" << endl;

    cin >> y1;

    cout << "Enter x2:" << endl;

    cin >> x2;

    cout << "Enter y2:" << endl;

    cin >> y2;

    cout << "The distance between the points is: " << setprecision(7) << calculateDistance(x1, y1, x2, y2, distance_type) << endl;
    return 1;
}

double calculateDistance(double x1, double y1, double x2, double y2, int distance_type){
    if(distance_type == 1){
        return (abs(x2 - x1) + abs(y2 - y1));
    }
    else if(distance_type == 2){

        return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    }
    else {
        return -1;
    }
}