#include <iostream>

using namespace std;

double estimatePaintingTime(double area, char painter){
    double hours;
    if(area <= 0){
        cout << "Please enter valid input" << endl;
        return 0;
    }
    else if (painter == 'W'){
        hours = ((area / 5) * 12) / 60;
        cout << "The time taken to paint all four walls by painter " << painter << ": " << hours << " hours" << endl;
        return hours;
    }
    else if (painter == 'X'){
        hours = ((area / 3) * 10) / 60;
        cout << "The time taken to paint all four walls by painter " << painter << ": " << hours << " hours" << endl;
        return hours;
    }
    else if (painter == 'Y'){
        hours = ((area / 2) * 5) / 60;
        cout << "The time taken to paint all four walls by painter " << painter << ": " << hours << " hours" << endl;
        return hours;
    }
    else if (painter == 'Z'){
        hours = ((area / 7) * 15) / 60;
        cout << "The time taken to paint all four walls by painter " << painter << ": " << hours << " hours" << endl;
        return hours;
    }
    else{
        cout << "Please enter valid input" << endl;
        return 0;
    }
}

int main(){
    double area;
    char painter;

    cout << "Enter area of the four walls (in sq ft)" << endl;

    cin >> area;

    cout << "Select painter (W, X, Y, or Z)" << endl;

    cin >> painter;

    estimatePaintingTime(area, painter);
}