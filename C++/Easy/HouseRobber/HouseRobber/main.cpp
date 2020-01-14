// Problem: You are a professional robber planning to rob houses along a street. Each house has a certain amount of money
// stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected
// and it will automatically contact the police if two adjacent houses were broken into on the same night.
// Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money
// you can rob tonight without alerting the police.
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
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        if(sizeof(nums) == 1){
            return nums[0];
        }
        if(sizeof(nums) == 2) {
            return max(nums[0], nums[1]);
        }
        int dp[sizeof(nums)];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2; i < sizeof(dp); i++){
            dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
        }
        int value = dp[sizeof(nums)-1];
        return value;
    }
};

int main(){
    vector<int> myVect;
    myVect.push_back(2);
    myVect.push_back(7);
    myVect.push_back(9);
    myVect.push_back(3);
    myVect.push_back(1);
    Solution A;
    int value = A.rob(myVect);
    cout << value << endl;
}
