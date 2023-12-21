#include <iostream>

using namespace std;

double estimatePaintingTime(){
    char painter;
    double hours, area;

    cout << "Enter the area of the four walls (in sq ft)" << endl;
    cin >> area;

    cout << "Select a painter (W, X, Y or Z)" << endl;
    cin >>painter;

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

double calculatePaintCost(){
    double cost, area;
    char paint_grade;

    cout << "Enter the area of the four walls (sq ft)" << endl;
    cin >> area;

    cout << "Select the paint grade (A, B or C)" << endl;
    cin >> paint_grade;

    if(area <= 0){
        cout << "Please enter valid input" << endl;
        return 0;
    }
    else if(paint_grade == 'A'){
        cost = 0.75 * area;
        cout << "The total cost to paint all four walls: $" << cost << endl;
        return cost;
    }
    else if(paint_grade == 'B'){
        cost = 1.25 * area;
        cout << "The total cost to paint all four walls: $" << cost << endl;
        return cost;
    }
    else if(paint_grade == 'C'){
        cost = 2.75 * area;
        cout << "The total cost to paint all four walls: $" << cost << endl;
        return cost;
    }
    else{
        cout << "Please enter valid input" << endl;
        return 0;
    }
}

double calculateWallArea(){
    double length;
    double width;

    cout << "Enter length of the base of the house (in ft)" << endl;

    cin >> length;

    cout << "Enter width of the base of the house (in ft)" << endl;

    cin >> width;
    double area = ((length * 20) + (width * 20));

    cout << "The total area of all the four walls is: " << area << endl;
    return area;
}

int main(){
    int option;

    cout << "Choose an option \n 1. Calculate Exterior Wall Area \n 2. Calculate Paint Cost \n 3. Estimate Painting Time \n 4. Exit" << endl;

    cin >> option;

    if(option == 1){
        
        calculateWallArea();
    }
    else if(option == 2){
        calculatePaintCost();
    }
    else if(option == 3){
        estimatePaintingTime();
    }
    else if(option == 4){
        cout << "Thank you!" << endl;
        return 0;
    }
    else{
        cout << "Please enter valid input" << endl;
        return 0;
    }
}