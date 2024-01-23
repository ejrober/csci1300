#include <iostream>
#include <iomanip>
using namespace std;

void calculateAndDisplayDiet(int current_day, double previous_days_fed);

int main(){
    //should ask the user to enter the current day, and how much Ralphie was fed on the previous day.
    //Days are represented with numbers with 0 corresponding to Monday, 1 corresponding to Tuesday, and so on.
    cout << "Enter current day: " << endl;

    int current_day;

    cin >> current_day;

    if((current_day < 0) || (current_day > 6)){
        cout << "Invalid input" << endl;
        return -1;
    }

    cout << "How much was Ralphie fed on the previous day? " << endl;

    int previous_days_fed;

    cin >> previous_days_fed;

    if(previous_days_fed < 0){
        cout << "Invalid input" << endl;
        return -1;
    }

    calculateAndDisplayDiet(current_day, previous_days_fed);

}

void calculateAndDisplayDiet(int current_day, double previous_days_fed){

    if(previous_days_fed > 18){
        cout << "Ralphie was fed too much yesterday!" << endl;
    }
    else{
        if(current_day == 2 || current_day == 5 || current_day == 6){
            double max = 34.50 - previous_days_fed;
            cout << "Ralphie should be fed at least 16.50 and at most " << setprecision(4) << max << " MCals of food today." << endl;
        }
        else{
            double max = 34.50 - previous_days_fed;
            cout << "Ralphie should be fed at least 12.50 and at most " << setprecision(7) << max << " MCals of food today." << endl;
        }
        
    }

    
}