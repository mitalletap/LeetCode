// Problem:
// Given a word, you need to judge whether the usage of capitals in
// it is right or not.
// We define the usage of capitals in a word to be right when one of the
// following cases holds:
// All letters in this word are capitals, like "USA".
// All letters in this word are not capitals, like "leetcode".
// Only the first letter in this word is capital, like "Google".
// Otherwise, we define that this word doesn't use capitals in a right way.
//
// Solution:
// Count the uppercase characters in the given word.
// Determine if the count is equal to the total amount of characters in the
// string. If so, return true.
// If count is equal to zero, it means all characters are lowercase. We can
// return true.
// Finally, if all BUT the first charcter are lowercase, return true.
//
// MY FIRST ATTEMPT
// Statistics
// Runtime: 4ms
// Memory Usage: 8.2MB
//
// KEVINS NAUGHTONS METHOD
// Statistics
// Runtime: 4ms
// Memory Usage: 8.4MB


#include <iostream>
#include <ctype.h>
using namespace std;


class Solution {
public:
    // KEVINS METHOD
    bool detectCapitalUse(string word) {
        int counter = 0;
        for(int i = 0; i < word.length(); i++){
            if(isupper(word[i])){
                counter++;
            }
        }
        return counter == word.length() || counter == 0 || (counter == 1 && isupper(word[0]));
    }




    // MY FIRST ATTEMPT
    bool detectCapitalUseFirst(string word) {
        bool valid = false;
        int lowerCounter = 0, upperCounter = 0;
        for(int i = 0; i < word.length(); i++){
            if(isupper(word[i])){
                upperCounter++;
            } else if(islower(word[i])){
                lowerCounter++;
            } else {
                valid = false;
            }
        }
        if((lowerCounter == word.length()) || upperCounter == word.length() || (lowerCounter = word.length() - 1 && isupper(word[0]) && upperCounter == 1)){
            valid  = true;
        } else {
            valid  = false;
        }
        return valid;
    }
};

int main() {
    Solution A;
    bool value = A.detectCapitalUse("leetcode");
    cout << value << endl;


}
