#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

int rollDie();

int makeWager();

string makePlayer();

int passLine(int roll);


int main(){
    int dice1, dice2;
    string player1, player2;
    int wager1, wager2;
    
    player1 = makePlayer();
    player2 = makePlayer();

    
    wager1 = makeWager();
    wager2 = makeWager();

    cout << player1 << " wagered " << wager1 << " " << player2 << " wagered " << wager2 << endl;
    dice1 = rollDie();
    dice2 = rollDie();
    

    passLine(dice1 + dice2);
    cout << "Roll is: " << dice1 + dice2 << endl;

    return 1;
}

int rollDie(){
    srand(time(NULL));
    return rand() % 6 + 1;
}

int makeWager(){
    int wager;
    cout << "Please enter your wager: " << endl;
    cin >> wager;
    return wager;
}

string makePlayer(){
    string player;
    cout << "Please enter your name: " << endl;
    cin >> player;
    return player;
}

int passLine(int roll){

    if((roll == 7) || (roll == 11)){
        cout << "You win!" << endl;
        return 1;
    }
    else if((roll == 2) || (roll == 3)){
        cout << "You lose!" << endl;
        return -1;
    }
    else if(roll == 12){
        cout << "You tie!" << endl;
        return 0;
    }
    cout << "The point is: " << roll << endl;
    return 0;
}