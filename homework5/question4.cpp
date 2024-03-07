#include <iostream>
#include <vector>
using namespace std;

double addProduct(double budget, char product_option);

vector<string> addProduct(char product_option, vector<string> shopping_cart);

double removeProduct(double budget, string remove_product);

vector<string> removeProduct(string product, vector<string> shopping_cart);

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

            budget = addProduct(budget, product_option); 
            shopping_cart = addProduct(product_option, shopping_cart);
        }
        else if (menu_option == 2){
            string remove_product;
            cout << "Enter the product name to be removed from the cart:" << endl;
            cin >> remove_product;
            budget = removeProduct(budget, remove_product); // Not removing products from the shopping cart correctly
            shopping_cart = removeProduct(remove_product, shopping_cart);
        }
        else if(menu_option == 3){
            checkout(shopping_cart);
            return 1;
        }
    }
}

double addProduct(double budget, char product_option){
    if ((product_option == 'A') || (product_option == 'a'))
        {
        if (budget >= 2.99){
            budget = budget - 2.99;
            //shopping_cart.push_back("Cheetos");
            //cout << "Cheetos added to cart." << endl;
            return budget;
        }
        else{
            cout << "Your budget is insufficient to add more products." << endl;
            return budget;
        }
    }
    else if ((product_option == 'B') || (product_option == 'b')){
        if (budget >= 3.39){
            budget = budget - 3.39;
            //shopping_cart.push_back("Oreos");
            //cout << "Oreos added to cart." << endl;
            return budget;
        }
        else{
            cout << "Your budget is insufficient to add more products." << endl;
            return budget;
        }
    }
    else if ((product_option == 'C') || (product_option == 'c')){
        if (budget >= 3.79){
            budget = budget - 3.79;
            //shopping_cart.push_back("Coffee");
            //cout << "Coffee added to cart." << endl;
            return budget;
        }
        else{
            cout << "Your budget is insufficient to add more products." << endl;
            return budget;
        }
    }
    else if ((product_option == 'D') || (product_option == 'd')){
        if (budget >= 4.29){
            budget = budget - 4.29;
            //shopping_cart.push_back("Slurpee");
            //cout << "Slurpee added to cart." << endl;
            return budget;
        }
        else{
            cout << "Your budget is insufficient to add more products." << endl;
            return budget;
        }
    }
    else{
        cout << "Invalid input." << endl;
        return budget;
    }
}

vector<string> addProduct(char product_option, vector<string> shopping_cart){
    if ((product_option == 'A') || (product_option == 'a')){
        shopping_cart.push_back("Cheetos");
        cout << "Cheetos added to cart." << endl;
        return shopping_cart;
    }
    else if ((product_option == 'B') || (product_option == 'b')){
        shopping_cart.push_back("Oreos");
        cout << "Oreos added to cart." << endl;
        return shopping_cart;
    }
    else if ((product_option == 'C') || (product_option == 'c')){
        shopping_cart.push_back("Coffee");
        cout << "Coffee added to cart." << endl;
        return shopping_cart;
    }
    else if ((product_option == 'D') || (product_option == 'd')){
        shopping_cart.push_back("Slurpee");
        cout << "Slurpee added to cart." << endl;
        return shopping_cart;
    }
    else{
        cout << "Invalid input." << endl;
        return shopping_cart;
    }
}

double removeProduct(double budget, string remove_product){
    if (remove_product == "Cheetos"){
        budget = budget + 2.99;
        //cout << "Cheetos removed from cart." << endl;
        return budget;
    }
    else if (remove_product == "Oreos"){
        budget = budget + 2.99;
        //cout << "Oreos removed from cart." << endl;
        return budget;
    }
    else if (remove_product == "Coffee"){
        budget = budget + 2.99;
        //cout << "Coffee removed from cart." << endl;
        return budget;
    }
    else if (remove_product == "Slurpee"){
        budget = budget + 2.99;
        //cout << "Slurpee removed from cart." << endl;
        return budget;
    }
    else{
        cout << "Invalid input." << endl;
        return budget;
    }
    return budget;
}

vector<string> removeProduct(string remove_product, vector<string> shopping_cart){
    if (remove_product == "Cheetos"){
        for (int i = 0; i < int(shopping_cart.size()); i++){
            if (shopping_cart[i] == "Cheetos"){
                shopping_cart.erase(shopping_cart.begin() + i);
                cout << "Cheetos removed from cart." << endl;
                return shopping_cart;
            }
        }
    }
    else if (remove_product == "Oreos"){
        for (int i = 0; i < int(shopping_cart.size()); i++){
            if (shopping_cart[i] == "Oreos"){
                shopping_cart.erase(shopping_cart.begin() + i);
                cout << "Oreos removed from cart." << endl;
                return shopping_cart;
            }
        }
    }
    else if (remove_product == "Coffee"){
        for (int i = 0; i < int(shopping_cart.size()); i++){
            if (shopping_cart[i] == "Coffee"){
                shopping_cart.erase(shopping_cart.begin() + i);
                cout << "Coffee removed from cart." << endl;
                return shopping_cart;
            }
        }
    }
    else if (remove_product == "Slurpee"){
        for (int i = 0; i < int(shopping_cart.size()); i++){
            if (shopping_cart[i] == "Slurpee"){
                shopping_cart.erase(shopping_cart.begin() + i);
                cout << "Slurpee removed from cart." << endl;
                return shopping_cart;
            }
        }
    }
    else{
        cout << "Invalid input." << endl;
        return shopping_cart;
    }
    return shopping_cart;
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