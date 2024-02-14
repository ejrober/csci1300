#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mostPopularWord(string words[], const int WORD_SIZE);

int main(){
    string words[] = {"mail", "text", "spam", "spam"};;
    const int WORD_SIZE = 4;
    mostPopularWord(words, WORD_SIZE);
}

void mostPopularWord(string words[], const int WORD_SIZE){

    int frequencies[sizeof(WORD_SIZE)] = {0};
    int max_index = 0;

    sort(words, words + WORD_SIZE); // sort array for binary search

    for(int i = 0; i < WORD_SIZE; i++){
        // index of first and last occurance of arr[i]
        int first_index = lower_bound(words, words + WORD_SIZE, words[i]) - words;
        int last_index = upper_bound(words, words + WORD_SIZE, words[i]) - words - 1;
        i = last_index;

        int frequency = last_index - first_index + 1; // finding frequency
        frequencies[i] = frequency;
        cout << words[i] << " " << frequencies[i] << endl;

        if(frequencies[max_index] < frequencies[i]){
            max_index = i;

        }
    }
    cout << "The most popular word is : " << words[max_index] << endl;
    cout << "Frequency : " << frequencies[max_index] << endl;
    
    for(int i = 0; i < WORD_SIZE; i ++){
        if(words[i] == words[max_index]){
            cout  << "Found at pos : " << i << endl;
        }
        
    }  
    
}