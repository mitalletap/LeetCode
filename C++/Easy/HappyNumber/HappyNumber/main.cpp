// Problem: Write an algorithm to determine if a number is "happy".
// A happy number is a number defined by the following process: Starting with
// any positive integer, replace the number by the sum of the squares of its
// digits, and repeat the process until the number equals 1 (where it will
// stay), or it loops endlessly in a cycle which does not include 1. Those
// numbers for which this process ends in 1 are happy numbers.
//
// Solution:
// For each index in a vector, check if the remaineder is equal to 0
// If it is, that means the index has a positive value
// Store that value in a temp variable, replace the index with the next in line
// and add the temp value to the beginning of the vector
// Print the Vector
//
// Statistics
// Runtime: 12ms
// Memory Usage: 8.3MB

#include <iostream>
#include <list>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        list<int> seen;
        while(n != 1){
            int current = n;
            int sum = 0;
            while(current != 0){
                sum += (current % 10) * (current % 10);
                current /= 10;
            }
            if(find(seen.begin(), seen.end(), sum) != seen.end()){
                return false;
            }
            seen.push_back(sum);
            n = sum;
        }
        return true;
    }
};

int main() {
    Solution A;
    bool HappyNumber = A.isHappy(19);
    if(HappyNumber){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}
