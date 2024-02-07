#include <iostream>
#include <assert.h>
#include <iomanip>
using namespace std;

double temperatureMean(double new_temperature[], const int TEMP_SIZE);
double temperatureRange(double new_temperature[], const int TEMP_SIZE);
void temperatureDelta(double new_temperature[], double old_temperature[], double delta[], const int TEMP_SIZE);

int main(){
    const int TEMP_SIZE = 5;
    double old_temperature[TEMP_SIZE] = {0, -19.5, 55.25, 71.167, 1.8};
    double new_temperature[TEMP_SIZE] = {12, 1, 60, 50.55, -16.087};
    double delta[TEMP_SIZE];
    cout << "Temperature Mean : " << fixed << setprecision(3) << temperatureMean(new_temperature, TEMP_SIZE) << endl;
    cout << "Temperature Range : " << fixed << setprecision(3) << temperatureRange(new_temperature, TEMP_SIZE) << endl;
    cout << "Temperature Delta : " << endl;
    temperatureDelta(new_temperature, old_temperature, delta, TEMP_SIZE);
    cout << fixed << setprecision(3) << delta[0] << endl;
    cout << fixed << setprecision(3) << delta[1] << endl;
    cout << fixed << setprecision(3) << delta[2] << endl;
    cout << fixed << setprecision(3) << delta[3] << endl;
    cout << fixed << setprecision(3) << delta[4] << endl;
}

double temperatureMean(double new_temperature[], const int TEMP_SIZE){
    double sum = 0;
    for(int i = 0; i < TEMP_SIZE; i ++){
        sum += new_temperature[i];
    }
    return sum / TEMP_SIZE;
}

double temperatureRange(double new_temperature[], const int TEMP_SIZE){
    int max_index = 0;
    int min_index = 0;
    for(int i = 0; i < TEMP_SIZE; i++){
        if(new_temperature[i] < new_temperature[min_index]){
            min_index = i;
        }
        if(new_temperature[i] > new_temperature[max_index]){
            max_index = i;
        }
    }
    return (new_temperature[max_index] - new_temperature[min_index]);
}

void temperatureDelta(double new_temperature[], double old_temperature[], double delta[], const int TEMP_SIZE){
    for(int i = 0; i < TEMP_SIZE; i++){
        delta[i] = (old_temperature[i] - new_temperature[i]);
    }
}