#include <iostream>
#include <string>

using namespace std;

int main(){
    int gold_coins, silver_coins, bronze_coins, iron_coins;
    cout << "Enter the number of iron coins:" << endl;
    cin >> iron_coins;

    if ((iron_coins % 3) >= 0)
    {
        bronze_coins = (iron_coins / 3);
        iron_coins = iron_coins - (bronze_coins * 3);
    }
    if ((bronze_coins % 13) >= 0)
    {
        silver_coins = (bronze_coins / 13);
        bronze_coins = bronze_coins - (silver_coins * 13);
    }
    if((silver_coins % 23) >= 0)
    {
        gold_coins = (silver_coins / 23);
        silver_coins = silver_coins - (gold_coins * 23);
    }

    //cout << to_string(gold_coins) + ", " + to_string(silver_coins) + ", " + to_string(bronze_coins) + ", " + to_string(iron_coins) << endl;

    cout << to_string(gold_coins) + " gold coin(s) " + to_string(silver_coins) + " silver coin(s) " + to_string(bronze_coins) + " bronze coin(s) " + to_string(iron_coins) + " iron coin(s)" << endl;


}