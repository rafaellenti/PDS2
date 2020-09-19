#include "WordCounter.hpp"
#include "Word.hpp"

using namespace std;

WordCounter::WordCounter(int num_words) {

	words = new Word[num_words];
}

void WordCounter::addWord(string w) {
    int i;
    for(i=0; i<size; i++) {
        if (words[i].word == w) {
            words[i].incrementFreq();
            return;
        } 
    }
    
    words[i].word = w;
    words[i].incrementFreq();
    size++;
}

WordCounter::~WordCounter() {
    delete words;
}

void WordCounter::print() const {
    Word aux;
    int i, j, firstWord = 0;
    for (j=0; j<size; j++) {
        for (i=0; i<size; i++) {
            if (words[i].word.at(1) < firstWord.at(1)) {
                firstWord = words[i].word;
            }
      
        }
        aux = 
    }
    
    
    
    cout << words[i].word << " " << words[i].count << endl;
}



