#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int purchaseTruck(int budget, int truck);

int main(){
    int budget =  81350;
    int truck;
    cout << "These are the trucks available for purchase:" << endl;

    cout << "Truck model 1: Ford F-150. Price: $26,900" << endl;

    cout << "Truck model 2: Dodge Ram 1500. Price: $21,400" << endl;

    cout << "Truck model 3: Chevy Silverado. Price: $24,700" << endl;

    cout << "Truck model 4: Toyota Tundra. Price: $31,200" << endl;

    cout << "Truck model 5: GMC Sierra 1500. Price: $28,300" << endl;

    for(int i = 0; i < 3; i++){
        if(i < 3 && budget > 31200){
            cout << "Please enter a number from 1 to 5:" << endl;

            cin >> truck;

            budget = purchaseTruck(budget, truck);
        }
        else {
            return 1;
        }
        
    }
        

    return 1;

}

int purchaseTruck(int budget, int truck){
    if((truck == 1) && (budget > 26900)){
        budget = budget - 26900;
        cout << "Congratulations! You have purchased a Ford F-150" << endl;
        return budget;
    }
    else if((truck == 2) && (budget > 21400)){
        budget = budget - 21400;
        cout << "Congratulations! You have purchased a Dodge RAM 1500" << endl;
        return budget;
    }
    else if((truck == 3) && (budget > 24700)){
        budget = budget - 24700;
        cout << "Congratulations! You have purchased a Chevy Silverado" << endl;
        return budget;
    }
    else if((truck == 4) && (budget > 31200)){
        budget = budget - 31200;
        cout << "Congratulations! You have purchased a Toyota Tundra" << endl;
        return budget;
    }
    else if((truck == 5) && (budget > 28300)){
        budget = budget - 28300;
        cout << "Congratulations! You have purchased a GMC Sierra 1500" << endl;
        return budget;
    }
    else{
        cout << "Invalid input!" << endl;
        return budget;
    }
}