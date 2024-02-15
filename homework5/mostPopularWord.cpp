#include <iostream>

using namespace std;

void mostPopularWord(string words[], const int WORD_SIZE);

int main(){ // Test cases for function "mostPopularWord(string words[], const int WORD_SIZE)"
    string words[] = {"apple", "corn", "corn", "apple", "lettuce"};
    const int WORD_SIZE = 5;
    mostPopularWord(words, WORD_SIZE); 
    /* Should print:
    The most popular word : apple
    Frequency : 2
    Found at pos :
    0
    3
    */

    const int WORDS_SIZE1 = 4;
    string words1[WORDS_SIZE1] = {"mail", "text", "spam", "spam"};
    mostPopularWord(words1, WORDS_SIZE1);
    /* Should print:
    The most popular word : spam
    Frequency : 2
    Found at pos :
    2
    3
    */

    const int WORDS_SIZE2 = 6;
    string words2[WORDS_SIZE2] = {"apple", "apple", "foo", "bar", "apple", "code"};
    mostPopularWord(words2, WORDS_SIZE2);
    /* Should print:
    The most popular word : apple
    Frequency : 2
    Found at pos :
    0
    3*/
    return 1;
}

void mostPopularWord(string words[], const int WORD_SIZE){ // This function prints the most popular word in an array its frequency and the indices it is found at.

    int frequencies[sizeof(WORD_SIZE)] = {0}; // This array holdds the frequencies of every word in the array by the end of the function.
    int max_index = 0; // This will be the index of the most popular word in the array.

    for(int i = 0; i < WORD_SIZE; i++){ // This loop processes each element of the array.
        int count = 1; // This is the count of each word in the array.
        for(int j = i +1; j < WORD_SIZE; j++){ // This loop checks for matches of the current word in the array. If there is a match the count is increased by 1.
            if(words[i] == words[j]){
                count++;
            }
        }
        
        frequencies[i] = count; // The count of each element of the array is put into the array of frequencies
        if(frequencies[i] > frequencies[max_index]){ // if the current count is greater than the previous max it becomes the new max.
            max_index= i;
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