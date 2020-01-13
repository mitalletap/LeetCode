//
//  main.cpp
//  HappyNumber
//
//  Created by Mital Patel on 1/12/20.
//  Copyright © 2020 Mital Patel. All rights reserved.
//

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
