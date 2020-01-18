// Problem:
// Given a word, you need to judge whether the usage of
// capitals in
// You are given a license key represented as a string S which
// consists only alphanumeric
// character and dashes. The string is separated into N+1 groups by N
// dashes.
// Given a number K, we would want to reformat the strings such that
// each group contains
// exactly K characters, except for the first group which could be
// shorter than K, but
// still must contain at least one character. Furthermore, there must
// be a dash inserted
// between two groups and all lowercase letters should be converted to
// uppercase.
// Given a non-empty string S and a number K, format the string
// according to the rules
// described above.
//
// Solution:
//
// MY FIRST ATTEMPT
// Statistics
// Runtime: 4ms
// Memory Usage: 8.2MB

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
       int count = 0;
       vector<char> final;
       stringstream ss;
       if(S.length() < 12000 && K > 0){
          for(int i = 0; i < S.length(); i++){
             if(isalnum(S[i])){
                count++;
             } else {
                S.erase(S.begin() + i);
                i--;
             }
          }
          cout << S << endl;
          int mod = count % K;   // 1
          int whole = count / K; // 2
          int j = 0;
          for(int i = 0; i < S.length(); i++){
             if(mod != 0){
                for(j; j < mod; j++){
                   final.push_back(S[j]);
                }
                i = j;
             } else {
                for(int i = 0; i < whole; i++){
                   for(int j = 0; j < K; j++){
                      final.push_back(S[i+j]);
                   }
                }
             }
          }
       }
       return S;
    }
};

int main() {
   Solution A;
   int K = 2;
   string S = "2-5g-3-J";
   // "2-5G-3J"
   A.licenseKeyFormatting(S, K);
}
