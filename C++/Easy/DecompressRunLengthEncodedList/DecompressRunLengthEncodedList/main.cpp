// Problem:
// We are given a list nums of integers representing a
// list compressed with run-length
// encoding.
// Consider each adjacent pair of elements [a, b] = [nums[2*i],
// nums[2*i+1]] (with i >= 0).
// For each such pair, there are a elements with value b in the
// decompressed list.
// Return the decompressed list.
//
// Solution:
// Check if vector has an even amount of elements
// For every other element i, print the next element j, i times.
// Push to a vector
// Return vector.
//
// Statistics
// Runtime: 44ms
// Memory Usage: 10.7MB

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums){
        vector<int> final;
        if(nums.size() % 2 == 0){
            for(int i = 0; i <= nums.size() - 1; i = i + 2){
                for(int j = 0; j < nums[i]; j++){
                    final.push_back(nums[i+1]);
                }
            }
        }
        return final;
    }
};

int main() {
    Solution A;
    vector<int> nums, final;
    nums.push_back(55);
    nums.push_back(11);
    nums.push_back(70);
    nums.push_back(26);
    nums.push_back(62);
    nums.push_back(64);
    final = A.decompressRLElist(nums);

}
