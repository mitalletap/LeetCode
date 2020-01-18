// Problem:
// Given a non-empty array of integers,
// every element appears twice except for
// one. Find that single one.
//
// Solution:
// Create a KeyPair for each occured number.
// Iterate through each number in the vector
// If the number has not been seen before, create a new KeyPair value
// If it has seen the number before, increase the value by one. (Better option would be to remove it)
// Once the vector has been fully iterated through, find the only value with a value of 1
// Return the key
//
// Statistics
// Runtime: 56ms
// Memory Usage: 11.9MB

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = 0;
        map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map.find(nums[i]) != map.end()){
                cout << "Found at: " << i << endl;
                map[nums[i]] += 1;
            } else {
                cout << "Not found at: " << i << endl;
                map.insert({nums[i], 1});
            }
        }

        for(auto it = map.begin(); it != map.end(); it++){
            if(it->second == 1){
                val = it->first;
            }
        }
        return val;
    }
};

int main() {
    vector<int> numbers;
    numbers.push_back(4);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(1);
    numbers.push_back(2);
    cout << numbers.size() << endl;


    Solution A;
    int single = A.singleNumber(numbers);
    cout << single << endl;
}
