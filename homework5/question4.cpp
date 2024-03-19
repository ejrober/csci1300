#include <iostream>
#include <vector>
using namespace std;

void addProduct(double& budget, char product_option, vector<string>& shopping_cart);

void removeProduct(double& budget, string product_option, vector<string>& shopping_cart);

void checkout(vector<string> shopping_cart);

int main()
{
    int menu_option = 0;

    vector<string> shopping_cart;
    cout << "Welcome to Kroga Gas Station!" << endl;
    cout << "Enter your budget:" << endl;

    double budget = 0;

    cin >> budget;

    while((menu_option > -1) && (menu_option < 4)){
        cout << "Please input 1-4 followed by enter to navigate the menu:" << endl;
        cout << "1) Add Product" << endl;
        cout << "2) Remove Product" << endl;
        cout << "3) Checkout" << endl;
        cout << "4) Exit" << endl;
        
        cin >> menu_option;

        if (menu_option == 1){
            cout << "Add Product:" << endl;
            cout << "A) Cheetos" << endl;
            cout << "B) Oreos" << endl;
            cout << "C) Coffee" << endl;
            cout << "D) Slurpee" << endl;

            char product_option;

            cin >> product_option;

            addProduct(budget, product_option, shopping_cart);
        }
        else if (menu_option == 2){
            string remove_product;
            cout << "Enter the product name to be removed from the cart:" << endl;
            cin >> remove_product;
            removeProduct(budget, remove_product, shopping_cart);
        }
        else if(menu_option == 3){
            checkout(shopping_cart);
            return 1;
        }
    }
}

void addProduct(double& budget, char product_option, vector<string>& shopping_cart){
    if ((product_option == 'A') || (product_option == 'a')){
        if (budget >= 2.99){
            budget = budget - 2.99;
            shopping_cart.push_back("Cheetos");
            cout << "Cheetos added to cart. " << endl;
            return;
        }
        else{
            cout << "Insufficient funds!" << budget << endl;
            return;
        }
        
    }
    else if ((product_option == 'B') || (product_option == 'b')){
        if (budget >= 3.39){
            budget = budget - 3.39;
            shopping_cart.push_back("Oreos");
            cout << "Oreos added to cart." << endl;
            return;
        }
        else{
            cout << "Insufficient funds!" << budget << endl;
            return;
        }
    }
    else if ((product_option == 'C') || (product_option == 'c')){
        if (budget >= 3.79){
            budget = budget - 3.79;
            shopping_cart.push_back("Coffee");
            cout << "Coffee added to cart." << endl;
            return;
        }
        else{
            cout << "Insufficient funds!" << budget << endl;
            return;
        }
    }
    else if ((product_option == 'D') || (product_option == 'd')){
        if (budget >= 4.29){
            budget = budget - 4.29;
            shopping_cart.push_back("Slurpee");
            cout << "Slurpee added to cart." << endl;
            return;
        }
        else{
            cout << "Insufficient funds!" << budget << endl;
            return;
        }
    }
    else{
        cout << "Invalid input." << endl;
        return;
    }
}

void removeProduct(double& budget, string product_option, vector<string>& shopping_cart){
    for (int i = 0; i < int(shopping_cart.size()); i++){
        if ((product_option == "Cheetos") && (shopping_cart[i] == "Cheetos")){
            shopping_cart.erase(shopping_cart.begin() + i);
            cout << "Cheetos removed from cart." << endl;
            budget = budget + 2.99;
            return;
        }
        else if ((product_option == "Oreos") && (shopping_cart[i] == "Oreos")){
            shopping_cart.erase(shopping_cart.begin() + i);
            cout << "Oreos removed from cart." << endl;
            budget = budget + 3.39;
            return;
        }
        else if ((product_option == "Coffee") && (shopping_cart[i] == "Coffee")){
            shopping_cart.erase(shopping_cart.begin() + i);
            cout << "Coffee removed from cart." << endl;
            budget = budget + 3.79;
            return;
        }
        else if ((product_option == "Slurpee") && (shopping_cart[i] == "Slurpee")){
            shopping_cart.erase(shopping_cart.begin() + i);
            cout << "Slurpee removed from cart." << endl;
            budget = budget + 4.29;
            return;
        }
    }
    return;
}

void checkout(vector<string> shopping_cart){
    double total = 0;
    for(int i = 0; i < int(shopping_cart.size()); i ++){
        if(shopping_cart[i] == "Cheetos"){
            total = total + 2.99;
        }
        else if(shopping_cart[i] == "Oreos"){
            total = total + 3.39;
        }
        else if(shopping_cart[i] == "Coffee"){
            total = total + 3.79;
        }
        else if(shopping_cart[i] == "Slurpee"){
            total = total + 4.29;
        }
        cout << shopping_cart[i] << endl;
    }
    cout << "Total amount: $" << total << endl;
    cout << "Thank you! Please visit again." << endl;
}