// Problem:
// Given an array nums, write a function to move all 0's to the end of it while maintaining the
// relative order of the non-zero elements.
//
// Solution:
// Iterate through the vector.
// Increment a counter for every occurence of a 0 as well as remove that index.
// For each occurance, add a 0 to the end of the same vector.
//
// Statistics
// Runtime: 16ms
// Memory Usage: 9.6MB

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int>::iterator it = nums.begin();
        while(it != nums.end()){
            if(*it == 0){
                count ++;
                it = nums.erase(it);
            } else {
                it++;
            }
        }
        cout << count << endl;
        
        for(int i = 0; i < count; i++){
            nums.push_back(0);
        }
    }
};

int main() {
    vector<int> myVect;
    myVect.push_back(0);
    myVect.push_back(1);
    myVect.push_back(0);
    myVect.push_back(3);
    myVect.push_back(12);
    
    Solution A;
    A.moveZeroes(myVect);
}
