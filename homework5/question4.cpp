#include <iostream>
#include <vector>
using namespace std;

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

        if (menu_option == 1)
        {
            cout << "Add Product:" << endl;
            cout << "A) Cheetos" << endl;
            cout << "B) Oreos" << endl;
            cout << "C) Coffee" << endl;
            cout << "D) Slurpee" << endl;

            char product_option;

            cin >> product_option;

            if ((product_option == 'A') || (product_option == 'a'))
            {
                if (budget >= 2.99)
                {
                    budget = budget - 2.99;
                    shopping_cart.push_back("Cheetos");
                    cout << "Cheetos added to cart." << endl;
                }
                else
                {
                    cout << "Your budget is insufficient to add more products." << endl;
                }
            }
            else if ((product_option == 'B') || (product_option == 'b'))
            {
                if (budget >= 3.39)
                {
                    budget = budget - 3.39;
                    shopping_cart.push_back("Oreos");
                    cout << "Oreos added to cart." << endl;
                }
                else
                {
                    cout << "Your budget is insufficient to add more products." << endl;
                }
            }
            else if ((product_option == 'C') || (product_option == 'c'))
            {
                if (budget >= 3.79)
                {
                    budget = budget - 3.79;
                    shopping_cart.push_back("Coffee");
                    cout << "Coffee added to cart." << endl;
                }
                else
                {
                    cout << "Your budget is insufficient to add more products." << endl;
                }
            }
            else if ((product_option == 'D') || (product_option == 'd'))
            {
                if (budget >= 4.29)
                {
                    budget = budget - 4.29;
                    shopping_cart.push_back("Slurpee");
                    cout << "Slurpee added to cart." << endl;
                }
                else
                {
                    cout << "Your budget is insufficient to add more products." << endl;
                }
            }
            else
            {
                cout << "Invalid input." << endl;
                return -1;
            }
        }
        else if (menu_option == 2)
        {
            string remove_product;
            cout << "Enter the product name to be removed from the cart:" << endl;
            cin >> remove_product;
            if (remove_product == "Cheetos")
            {
                for (int i = 0; i < int(shopping_cart.size()); i++)
                {
                    if (shopping_cart[i] == "Cheetos")
                    {
                        shopping_cart.erase(shopping_cart.begin() + i);
                        budget = budget + 2.99;
                        cout << "Cheetos removed from cart." << endl;
                    }
                }
            }
        }
    }    
}