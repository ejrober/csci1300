#include <iostream> 

using namespace std;

double calculateWallArea(double length, double width){
    double area = (length * 20) + (width * 20);
    return area;
}

int main(){
    double length, width, area;

    cout << "Enter the length of the wall" << endl;
    cin >> length;

    if(length < 0){
        cout << "Please enter valid input" << endl;
        return 0;
    }
    else{
        cout << "Enter the width of the wall" << endl;
        cin >> width;

        area = calculateWallArea(length, width);
        cout << "The total area of all four walls: " << area << " sq ft" << endl;
        return 0;
    }
    
}