#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "Welcome to Kroga Gas Station!" << endl;
    cout << "Enter your budget:" << endl;

    int budget = 0;

    cin >> budget;

    cout << "Please input 1-4 followed by enter to navigate the menu:" << endl;
    cout << "1) Add Product" << endl;
    cout << "2) Remove Product" << endl;
    cout << "3) Checkout" << endl;
    cout << "4) Exit" << endl;

    int menu_option = 0;

    cin >> menu_option;

    while(menu_option == 1){
        cout << "Add Product:" << endl;
        cout << "A) Cheetos" << endl;
        cout << "B) Oreos" << endl;
        cout << "C) Coffee" << endl;
        cout << "D) Slurpee" << endl;
        
        char product_option;

        cin >> product_option;

        if(product_option == 'A'){
            cout << "Cheetos added to cart." << endl;
        }
        else if(product_option == 'B'){
            cout << "Oreos added to cart." << endl;
        }
        else if(product_option == 'C'){
            cout << "Coffee added to cart." << endl;
        }
        else if(product_option == 'D'){
            cout << "Slurpee added to cart." << endl;
        }
        else{
            cout << "Invalid input." << endl;
            return -1;
        }
    }

}