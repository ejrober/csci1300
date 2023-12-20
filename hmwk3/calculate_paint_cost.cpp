#include <iostream>

using namespace std;

double calculatePaintCost(double area, char paint_grade){
    double cost;
    if(paint_grade == 'A'){
        cost = 0.75 * area;
        return cost;
    }
    else if(paint_grade == 'B'){
        cost = 1.25 * area;
        return cost;
    }
    else if(paint_grade == 'C'){
        cost = 2.75 * area;
        return cost;
    }
    else{
        cout << "Please enter valid input" << endl;
        return 0;
    }
}

int main(){
    char paint_grade;
    double area, cost;

    cout << "Enter area of the four walls (in sq ft)" << endl;
    cin >> area;
    if(area <= 0){
        return 0;
    }
    else{
        cout << "Select paint grade (A, B, or C)" << endl;
        cin >> paint_grade;

        cost = calculatePaintCost(area, paint_grade);
        cout << "The total cost to paint all four walls: $" << cost << endl;
    }

    
}