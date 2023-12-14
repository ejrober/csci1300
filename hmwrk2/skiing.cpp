#include <iostream>

using namespace std;

int main()
{
    int temperature, wind_speed;

    cout << "What is tomorrow's temperature looking like?" << endl;
    cin >> temperature;

    cout << "What is tomorrow's wind speed looking like?" << endl;
    cin >> wind_speed;

    if((wind_speed < 0) || (temperature < 0))
    {
        cout << "Please enter valid input." << endl;
        return 0;
    }
    if((temperature > 20) && (temperature < 30) && (wind_speed < 50))
    {
        cout << "The weather conditions are ideal for skiing tomorrow." << endl;
        return 0;
    }
    else
    {
        cout << "The weather conditions are less than ideal for skiing tomorrow." << endl;
        return 0;
    }
}