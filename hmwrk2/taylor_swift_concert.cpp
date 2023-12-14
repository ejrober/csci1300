#include <iostream>

using namespace std;

int main()
{
    //Declare all the variables
    int traffic_flow_rate;

    // prompt user & get their input
    cout << "Enter the current traffic flow rate: " << endl;
    cin >> traffic_flow_rate;

    // input validation: traffic flow rate on the highway must be positive
    if(traffic_flow_rate < 0)
    {
        cout << "Invalid flow rate" << endl;
        return 0;
    }

    // decide if it is possible to reach the concert on time based on the traffic flow rate
    if(traffic_flow_rate < 800)
    {
        cout << "You will not make it!" << endl;
    }
    else {
        cout << "You will make it!" << endl;
    }

}