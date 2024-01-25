#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    
    string card_names[9] = {"Ace", "Clubs", "Diamonds", "Hearts", "Spades", "Jack", "Queen", "King", "Joker"};

    for(int i = 0; i < 9; i ++){
        cout << card_names[i] << endl;
    }
    
    double sq_root_nums[10]; // {1, 1.4142, 1.732, 2, 2.236, 2.4494, 2.6457, 2.8284, 3, 3.1622};
    
    for(int i = 1; i < 11; i++){
        sq_root_nums[i] = sqrt(i);
        cout << fixed << setprecision(3) << sq_root_nums[i] << endl;
    }
    
    int numbers[7]; // {56, 63, 70, 77, 84, 91, 98};
    
    for(int i = 50; i < 100; i++){
        if(i % 7 ==0){
            numbers[i] = i;
            cout << numbers[i] << endl;
        }
       
    }
    
    char letters[52];
    
    for (int i = 0; i < 26; i++) {
        letters[i] = 'a' + i;
        cout << letters[i] << endl;
    }
    
    for (int i = 0; i < 26; i++) {
        letters[i] = 'A' + i;
        cout << letters[i] << endl;
    }
}