#include <iostream>

using namespace std;


int main()
{
    int genre, author, title;

    cout << "Select the genre: (1) Mystery (2) Science" << endl;
    cin >> genre;

    if(genre == 1){
        cout << "Select the Author: (1) Agatha Christie (2) Arthur Conan Doyle (3) Stephen King" << endl;
        cin >> author;

        if(author == 1){
            cout << "Select the Book Title: (1) Hercule Poirot (2) Miss Marple Detective" << endl;
            cin >> title;

            if(title == 1){
                cout << "You have ordered Hercule Poirot" << endl;
                return 0;
            }
            else if(title == 2){
                cout << "You have ordered Miss Marple Detective" << endl;
                return 0;
            }
            else{
                cout << "Please enter valid input" << endl; 
                return 0;
            }
        }

        else if(author == 2){
            cout << "Select the Book Title: (1) The Memiors of Sherlock Holmes (2) Tales of Terror and Mystery" << endl;
            cin >> title;

            if(title == 1){
                cout << "You have ordered The Memiors of Sherlock Holmes" << endl;
                return 0;
            }
            if(title == 2){
                cout << "You have ordered Tales of Terror and Mystery" << endl;
                return 0;
            }
            else{
                cout << "Please enter valid input" << endl; 
                return 0;
            }
        }
        else if(author == 3){
            cout << "Select the Book Title: (1) The Institute (2) Misery" << endl;
            cin >> title;

            if(title == 1){
                cout << "You have ordered The Institute" << endl;
                return 0;
            }
            if(title == 2){
                cout << "You have ordered Misery" << endl;
                return 0;
            }
            else{
                cout << "Please enter valid input" << endl; 
                return 0;
            }
        }
    }
    else if (genre == 2){
        cout << "Select the Author: (1) Stephen Hawking (2) Carl Sagan (3) Mary Roach" << endl;
        cin >> author;

        if(author == 1){
            cout << "Select the Book Title: (1) A Brief History of Time (2) The Universe in a Nutshell" << endl;
            cin >> title;

            if(title == 1){
                cout << "You have ordered A Brief History of Time" << endl;
                return 0;
            }
            else if(title == 2){
                cout << "You have ordered The Universe in a Nutshell" << endl;
                return 0;
            }
            else{
                cout << "Please enter valid input" << endl; 
                return 0;
            }
        }
        else if(author == 2){
            cout << "Select the Book Title: (1) Cosmos (2) Pale Blue Dot" << endl;
            cin >> title;

            if(title == 1){
                cout << "You have ordered Cosmos" << endl;
                return 0;
            }
            else if(title == 2){
                cout << "You have ordered Pale Blue Dot" << endl;
                return 0;
            }
            else{
                cout << "Please enter valid input" << endl; 
                return 0;
            }
        }
        else if(author == 3){
            cout << "Select the Book Title: (1) Stiff: The Curious Lives of Human Cadavers (2)  Gulp: Adventures on the Alimentary Canal" << endl;
            cin >> title;

            if(title == 1){
                cout << "You have ordered Stiff: The Curious Lives of Human Cadavers" << endl;
                return 0;
            }
            else if(title == 2){
                cout << "You have ordered  Gulp: Adventures on the Alimentary Canal" << endl;
                return 0;
            }
            else{
                cout << "Please enter valid input" << endl; 
                return 0;
            }
        }
        else{
            cout << "Please enter valid input" << endl; 
            return 0;
        }

    }
    else{
            cout << "Please enter valid input" << endl; 
            return 0;
    }
}