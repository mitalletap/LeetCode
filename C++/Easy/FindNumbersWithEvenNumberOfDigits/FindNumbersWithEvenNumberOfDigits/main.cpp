// Problem:
// Given an array nums of integers, return how many of them contain an even number of digits.
//
// Solution:
// Set bounds based on requirements
// In a for loop for each element, convert the number to a string, check the length of the string, and if the string is divisible
// by 2, incease a counter by 1
// Return the counter value.
//
// Statistics
// Runtime: 12ms
// Memory Usage: 9MB

#include <iostream>
#include <math.h> // Power
#include <vector> // Vector
#include <stdlib.h> // Random
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        if(sizeof(nums) <= 500 && nums.size() >= 1){
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] >= 1 && nums[i] <= 100000){
                    if(to_string(nums[i]).length() % 2 == 0){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};

int main() {
    int random;

    vector<int> myVect, myVect2;
    myVect2.push_back(12);
    myVect2.push_back(345);
    myVect2.push_back(2);
    myVect2.push_back(6);
    myVect2.push_back(7896);

    //rand (time(NULL));
    for(int i = 0; i < myVect2.size(); i++){
        random = rand() % 1000 + 1;
        myVect.push_back(random);
    }
    Solution A;
    int count = A.findNumbers(myVect2);
    cout << count << endl;
}
