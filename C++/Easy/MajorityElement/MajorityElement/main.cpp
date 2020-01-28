// Problem:
// Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
// You may assume that the array is non-empty and the majority element always exist in the array.
//
// Solution:
// Check if both roots are null. If they are, return false.
// Check if only one root is null. If so, return false.
// Check if both root values are equal to each other. If not, return false.
// If both root values are equal to each other, recursively call the function for its left and right nodes
//
// Statistics
// Runtime: 4ms
// Memory Usage: 9.7MB

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val =  0;
        vector<int>::iterator ip;
        sort(nums.begin(), nums.end());
        ip = unique(nums.begin(), nums.begin() + nums.size());
        nums.resize(distance(nums.begin(), ip));
        for(int i = 0; i < nums.size(); i++){
//            if(count(nums.begin(), nums.end(), ip[i]) > (nums.size() / 2)){
//                val = nums[i];
//                break;
//            }
            cout << nums[i] << endl;
        }
        
        cout << val << endl;
        
        
        
        
        
        
        return val;
    }
};

int main() {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    
    Solution A;
    A.majorityElement(nums);
}
