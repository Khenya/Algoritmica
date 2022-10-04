#include <bits/stdc++.h> 

using namespace std; 

struct node {
    char currentCharacter;       
    bool isWord;
    struct node *Cbefore;
    struct node *children[27];
    node() {
        isWord = false;
    }
}*trie; 


void init() {
    trie = new node();
}

void insertWord(string word) {   
    node *currentNode =  trie;  
    for (int i = 0; i< word.length(); i++) { 
        int character = word[i] - 'a';       
        if(currentNode->children[character] == NULL ) {
            currentNode->children[character] = new node();
        }
        currentNode = currentNode->children[character];
        currentNode->currentCharacter = word[i];
    }
    currentNode->isWord = true;
}

bool searchWord(string word) {   
    node *currentNode =  trie;  
    for (int i = 0; i< word.length(); i++) {
        int character = word[i] - 'a';       
        if(currentNode->children[character] == NULL ) {
           return false;
        }
        currentNode = currentNode->children[character];
    }
    cout<<currentNode->currentCharacter<<endl;
    return currentNode->isWord;
}

void deleteWord(string word){
    if(!searchWord(word)){
        cout << "No esta la palabra" << endl;
        return;
    }
    node *currentNode = trie;
    
    currentNode = currentNode->children[int(word[0]-'a')];

    for(int i=1; i<word.length(); i++){
        currentNode = currentNode->children[int(word[i]-'a')];
    }
    currentNode->isWord = false;
    currentNode = NULL;
    delete currentNode;
}

void isThereWord(string word) {
    if(searchWord(word)) {
        cout<<"si existe : "<<word<<" en el trie"<<endl;
    } else {
        cout<<"No Existe :P"<<endl;
    }
}

int main() {


    init();  
    string word = "auto";
    insertWord(word);
    isThereWord(word);
    word = "automovil";   
    insertWord(word);
    isThereWord("auto");
    isThereWord(word);
    deleteWord("automovil");
        isThereWord(word);

    return 0;
}

