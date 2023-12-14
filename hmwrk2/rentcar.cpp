#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string car_type;
    int days_rented;
    double base_price, price_per_day, bill_total;

    cout << "Which car type ( A, B, C or D ) would you like to rent?" << endl;
    cin >> car_type;

    cout << "How many days would you like to rent this car?" << endl;
    cin >> days_rented;

    if(car_type == "A"){
        base_price = 100;
        price_per_day = 15;
        bill_total = 1.09 * (base_price + days_rented * price_per_day);
        cout << "Your bill total is $" << fixed << setprecision(2) << bill_total << endl;
        return 0;
    }
    if(car_type == "B"){
        base_price = 150;
        price_per_day = 20;
        bill_total = 1.09 * (base_price + days_rented * price_per_day);
        cout << "Your bill total is $" << fixed << setprecision(2) << bill_total << endl;
        return 0;
    }
    if(car_type == "C"){
        base_price = 200;
        price_per_day = 25;
        bill_total = 1.09 * (base_price + days_rented * price_per_day);
        cout << "Your bill total is $" << fixed << setprecision(2) << bill_total << endl;
        return 0;
    }
    if(car_type == "D"){
        base_price = 250;
        price_per_day = 30;
        bill_total = 1.09 * (base_price + days_rented * price_per_day);
        cout << "Your bill total is $" << fixed << setprecision(2) << bill_total << endl;
        return 0;
    }
    else {
        cout << "Please enter valid input." << endl;
        return 0;
    }
}