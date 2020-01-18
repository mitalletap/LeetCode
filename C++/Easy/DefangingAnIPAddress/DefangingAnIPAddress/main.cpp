// Problem:
// Given a valid (IPv4) IP address, return a defanged version
// of that IP address.
// A defanged IP address replaces every period "." with "[.]".
//
// Solution:
// Set a counter equal to zero and check it never goes past 0.
// Check the value for each index of the address.
// If the value is not equal to a '.', increase the counter.
// If the value is equal to '.', add '[' to the index before and ']' to
// the index after.
// Reset the count to 0 and iterate the for loop twice to account for
// the new additions.
// Return the string.
//
// Statistics
// Runtime: 0ms
// Memory Usage: 8.2MB

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        int count = 0;
        for(int i = 0; i < address.length(); i++){
            if(address[i] != '.'){
                count++;
            } else if(address[i] == '.' && count < 4){
                address.insert(i, "[");
                address.insert(i+2, "]");
                count = 0;
                i = i+2;
            }
        }
        return address;
    }
};

int main() {
    string address = "225.100.50.0";
    Solution A;
    string new_address = A.defangIPaddr(address);
    cout << new_address << endl;

}
