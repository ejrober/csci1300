#include <iostream>

using namespace std;

void mostPopularWord(string words[], const int WORD_SIZE);

int main(){
    string words[] = {"apple", "corn", "corn", "apple", "lettuce"};
    const int WORD_SIZE = 5;
    mostPopularWord(words, WORD_SIZE);

    const int WORDS_SIZE1 = 4;
    string words1[WORDS_SIZE1] = {"mail", "text", "spam", "spam"};
    mostPopularWord(words1, WORDS_SIZE1);

    const int WORDS_SIZE2 = 6;
    string words2[WORDS_SIZE2] = {"apple", "apple", "foo", "bar", "apple", "code"};
    mostPopularWord(words2, WORDS_SIZE2);
    return 1;
}

void mostPopularWord(string words[], const int WORD_SIZE){

    int frequencies[sizeof(WORD_SIZE)] = {0};
    int max_index = 0;

    for(int i = 0; i < WORD_SIZE; i++){
        //cout << "The word being processed is " << words[i] << endl;
        int count = 1;

        for(int j = i +1; j < WORD_SIZE; j++){
            if(words[i] == words[j]){
                count++;
            }
        }
        
        frequencies[i] = count;
        //cout << "The frequency of " << words[i] << " is " << frequencies[i] << endl;
        if(frequencies[i] > frequencies[max_index]){
            max_index= i;
            //cout << "The index of the word with the maximum frequency int the array is " << max_index << endl;
        }
    }

    cout << "The most popular word is : " << words[max_index]  << endl;
    cout << "Frequency : " << frequencies[max_index] << endl;

    cout << "Found at pos : " << endl;

    for(int i = 0; i < WORD_SIZE; i ++){ // This loop prints the indices of the most popular word in the array.
        if(words[i] == words[max_index]){
            cout << i << endl;
        }
    }
    
}