#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string composeMessage(string first_name, string last_name, char position);

int main()
{
    //Declare variables
    string first_name, last_name;
    char position;

    //Capture user input
    cout << "What is your first name?" << endl;
    cin >> first_name;
    cout << "What is your last name?" << endl;
    cin >> last_name;
    cout << "What is your position? Enter P for passenger, C for captain, E for engineer, and N for navigator:" << endl;
    cin >> position;

    //Validate input
    if ((position != 'P') && (position != 'C') && (position != 'E') && (position != 'N')) {
        cout << "First Invalid position!" << endl;
        return 0;
    }

    //Compose and display message
    string message = composeMessage(first_name, last_name, position);
    cout << message << endl;
    return 0;
}

string composeMessage(string first_name, string last_name, char position){
    if(position == 'E'){
        return "Welcome Aboard! The engine rooms are below deck down on the second aft stairway";
    }
    else if(position == 'P'){
        return "Welcome Aboard! The passenger rooms are thru the third door on the right";
    }
    else if(position == 'N'){
        return "Welcome Aboard! The cartography chamber is up the stairs on the bow";
    }
    else if(position == 'C'){
        return "Welcome Aboard! The captain's quarters are up the stairs to the left";
    }
    else{
        return "Second Invalid position!";
    }
    return "Second Invalid position!";
}