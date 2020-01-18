// Problem:
// Given a list of emails, we send one email to each address in the list.  How many different
// addresses actually receive mails? (Given a set of conditions [check leetcode question for
// specifics])
//
// Solution:
// Iterate through each character in each email in the vector.
// Create a string to append each character too.
// If the character is equal to '.' before the '@' has occured, continue, otherwise, add it to the
// string.
// If the character is equal to '+', do not append anything and keep iterating until you come across
// '@'. Add the '@' to the string.
// Finally, add each revised email to a unordered set.
// Return the size of the unique set.
//
// Statistics
// Runtime: 92ms
// Memory Usage: 37.4MB

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> final;
        for(int i = 0; i < emails.size(); i++){
            string s = "";
            bool seen = false;
            for(int j = 0; j < emails[i].length(); j++){
                if(emails[i][j] == '@'){
                    seen = true;
                    s = s + emails[i][j];
                } else if(emails[i][j] == '.' && seen == false){
                    continue;
                } else if(emails[i][j] == '+'){
                    while(emails[i][j] != '@'){
                        seen = true;
                        j++;
                    }
                    s = s + emails[i][j];
                } else {
                    s = s + emails[i][j];
                }
            }
            final.insert(s);
        }
        return final.size();
    }
};

int main() {
    Solution A;
    vector<string> emails, emails2;
    emails.push_back("test.email+alex@leetcode.com");
    emails.push_back("test.e.mail+bob.cathy@leetcode.com");
    emails.push_back("testemail+david@lee.tcode.com");

    emails2.push_back("test.email+alex@leetcode.com");
    emails2.push_back("test.email@leetcode.com");

    A.numUniqueEmails(emails);
    A.numUniqueEmails(emails2);
}
