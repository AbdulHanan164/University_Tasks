#include <iostream>
#include <string>
using namespace std;
// Function to check if a word is elfish
bool elfish(const string word, int index, bool hasE, bool hasL, bool hasF) {
    //  If we have checked the entire word return true if it is elfish
    if (index == word.length()) {
        return hasE && hasL && hasF;
    }
    // Check the current character
    char currentChar = word[index];
    if (currentChar == 'e') {
        hasE = true;
    }
    else if (currentChar == 'l') {
        hasL = true;
    }
    else if (currentChar == 'f') {
        hasF = true;
    }
    // Recursively check the rest of the word
    return elfish(word, index + 1, hasE, hasL, hasF);
}
int main() {
    string word;
    while (true) {
        cout << "Enter a word: ";
        cin >> word;
        bool isElfish = elfish(word, 0, false, false, false);
        if (isElfish) {
            cout << word << " is elfish." << endl;
        }
        else {
            cout << word << " is not elfish." << endl;
        }
    }
    return 0;
}
