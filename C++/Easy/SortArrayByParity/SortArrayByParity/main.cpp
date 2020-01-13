// How to Solve:
//
// Problem: Sort a vector of numbers with Even numbers before Odd numbers
// For each index in a vector, check if the remaineder is equal to 0
// If it is, that means the index has a positive value
// Store that value in a temp variable, replace the index with the next in line
// and add the temp value to the beginning of the vector
// Print the Vector

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int index = 0;
        for(int i = 0; i < A.size(); i++){
            if(A.at(i) % 2 == 0){
                int temp = A[index];
                A[index++] = A[i];
                A[i] = temp;
            }
        }
        return A;
    }
};


int main() {
    vector<int> myVector, newVector;
    for(int i = 0; i < 10; i++){
        myVector.push_back(i);
    }
    Solution A;
    newVector = A.sortArrayByParity(myVector);
    for(int i = 0; i < 10; i++){
        cout << myVector.at(i) << endl;
    }
}
