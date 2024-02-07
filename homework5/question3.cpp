#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mostPopularWord(string words[], const int WORD_SIZE);

int main(){
    string words[] = {"this", "is", "a", "test"};
    const int WORD_SIZE = 4;
    mostPopularWord(words, WORD_SIZE);
}

void mostPopularWord(string words[], const int WORD_SIZE){
    // Mark all array elements as not visited
    vector<bool> visited(WORD_SIZE, false);

    // Traverse the array elements and count frequencies
    for(int i = 0; i < WORD_SIZE; i++){
        //Skip this element if already processed
        if(visited[i] == true){
            continue;
        }

        //Count frequency
        int count = 1;
        for(int j = i + 1; j < WORD_SIZE; j++){
            if(words[i] == words[j]){
                visited[j] = true;
                count++;
            }
        }
        cout << words[i] << " " << count << endl;
    }
    cout << "The most popular word is " << words[0] << endl;
}