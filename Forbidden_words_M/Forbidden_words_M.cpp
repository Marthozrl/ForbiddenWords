// Forbidden_words_M.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

/*int main() {
    string text = "So I’m currently a healer on emerald dream with an ilvl of 466 which I’ve asked a couple people saying shoudl be fine for a heroic raid.";
    vector<string> forbiddenWords = { "emerald","couple","fine" }; //pretty much a two dimentional string

    cout << "Original text:\n" << text << "\n\n";
    cout << "Forbidden words: ";
    for (const auto& word : forbiddenWords) {
        cout << word << " ";
    }   // since iyt is a vector I need to cout it with a for 
    cout << "\n";
    cout << "Forbidden text:\n";

    istringstream iss(text); // breaking down the text into words
    string word;  //intializing word stream so it can be used to store every word

    while (iss >> word) {  //putting each word into this word string
        // is word forbidden
        bool isForbidden = false; // initial value
        for (const string& forbiddenWord : forbiddenWords) {  // goes through the string of forbidden words
            if (word == forbiddenWord) {  // if word in the normal string is == to forbidden word
                isForbidden = true; // change this
                break;  // braak the for
            }
        }

        // go here and replace
        if (isForbidden) {  // if isForbidden true
            string censoredWord(word.length(), '*'); // in the new string put * as much as the word is big
            cout << censoredWord << " "; // cout the word, because we're not cout-ing the entire string, but word by word
        }
        else {
            cout << word << " ";  // if isForbidden is false, just print the current word
        }                           // then go back to the while, check fo the next word, go to the for and do it again
    }

    return 0;
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


void censorWords(const string& text, const vector<string>& forbiddenWords) {
    istringstream iss(text); // breaking down the text into words
    string word;  //intializing word stream so it can be used to store every word

    while (iss >> word) {  //putting each word into this word string
        // is word forbidden
        bool isForbidden = false; // initial value
        for (const string& forbiddenWord : forbiddenWords) {  // goes through the string of forbidden words
            if (word == forbiddenWord) {  // if word in the normal string is == to forbidden word
                isForbidden = true; // change this
                break;  // braak the for
            }
        }

        // go here and replace
        if (isForbidden) {  // if isForbidden true
            string censoredWord(word.length(), '*'); // in the new string put * as much as the word is big
            cout << censoredWord << " "; // cout the word, because we're not cout-ing the entire string, but word by word
        }
        else {
            cout << word << " ";  // if isForbidden is false, just print the current word
        }                           // then go back to the while, check fo the next word, go to the for and do it again
    }
}

int main() {
    string text = "So I’m currently a healer on emerald dream with an ilvl of 466 which I’ve asked a couple people saying shoudl be fine for a heroic raid.";
    vector<string> forbiddenWords = { "emerald","couple","fine"}; //pretty much a two dimentional string

    cout << "Original text:\n" << text << "\n\n";
    cout << "Forbidden words: ";
    for (const auto& word : forbiddenWords) {
        cout << word << " ";
    }   // since it is a vector I need to cout it with a for
    cout << "\n";
    cout << "Forbidden text:\n";
    censorWords(text, forbiddenWords);

    return 0;
}