#include <iostream>

using namespace std;

int main()
{
    string seat_selection;
    double budget;

    cout << "What is your budget?" << endl;
    cin >> budget;

    cout << "Which of these seats would you like to take (G, B, P or O)?" << endl;
    cin >> seat_selection;

    if(budget < 0)
    {
        cout << "Please enter valid input." << endl;
        return 0;
    }
    if((budget >= 1075.15) && (seat_selection == "G"))
    {
        cout << "Yes, this seat is within your budget!" << endl;
        return 0;
    }
    if((budget >= 1340.96) && (seat_selection == "B"))
    {
        cout << "Yes, this seat is within your budget!" << endl;
        return 0;
    }
    if((budget >= 1684.29) && (seat_selection == "P"))
    {
        cout << "Yes, this seat is within your budget!" << endl;
        return 0;
    }
    if((budget >= 1950.23) && (seat_selection == "O"))
    {
        cout << "Yes, this seat is within your budget!" << endl;
        return 0;
    }
    if((seat_selection != "G") && (seat_selection != "B") && (seat_selection != "P") && (seat_selection != "O"))
    {
        cout << "Please enter valid input." << endl;
        return 0;
    }
    else
    {
        cout << "Sorry, this seat is out of your budget." << endl;
        return 0;
    }

}