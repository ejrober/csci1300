#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int manageFeeder(int feeder, int days_since_past_last_fill);

int main(){

    int days_since_last_fill;

    cout << "How many days ago was feeder 1 filled?" << endl;
    cin >> days_since_last_fill;
    if(days_since_last_fill < 0){
        cout << "Invalid input!" << endl;
        return 1;
    }
    int num_days_until_feeder1_runs_out = manageFeeder(1, days_since_last_fill);

    cout << "How many days ago was feeder 2 filled?" << endl;

    cin >> days_since_last_fill;

    if(days_since_last_fill < 0){
        cout << "Invalid input!" << endl;
        return 1;
    }
    int num_days_until_feeder2_runs_out = manageFeeder(2, days_since_last_fill);

    cout << "How many days ago was feeder 3 filled?" << endl;

    cin >> days_since_last_fill;
    
    if(days_since_last_fill < 0){
        cout << "Invalid input!" << endl;
        return 1;
    }

    int num_days_until_feeder3_runs_out = manageFeeder(3, days_since_last_fill);

    cout << "Feeder 1 will need to be "

}

int manageFeeder(int feeder, int days_since_past_last_fill){ // calculate how many days until the specified feeder runs out of birdseed
    int capacity;
    int drain_rate;
    if(feeder == 1){
        capacity = 21;
        drain_rate = 3 * days_since_past_last_fill;
        return capacity - drain_rate;
    }
    else if(feeder == 2){
        capacity = 37;
        drain_rate = 2 * days_since_past_last_fill;
        return capacity - drain_rate;
    }
    else if(feeder == 3){
        capacity = 17;
        drain_rate = 4 * days_since_past_last_fill;
        return capacity - drain_rate;
    }
    else{
        return -1;
    }
}