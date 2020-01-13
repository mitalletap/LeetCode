// How to Solve:
//
// Problem: Count the number of prime numbers less than a non-negative number, n.
// Create an array of size N that are initalized as true
// Since i^2 must be less than the size of the array, make that the bound
// Iterate from 2 to i^2 
// While iterated, if the number is a prime and its square is less than the array size,
// set the square value to false
// in a new loop, iterate through
// For every occurance of a true value, increase a counter
// Print the size of the counter


#include <iostream>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        bool primes[n];
        for(int i = 0; i < n; i++){
            primes[i] = true;
        }
        
        for(int i = 2; i * i < sizeof(primes); i++){
            if(primes[i]){
                for(int j = i; j * i < sizeof(primes); j++){
                    primes[i * j] = false;
                }
            }
        }
        int primeCount = 0;
        for(int i = 2; i < sizeof(primes); i++){
            if(primes[i]){
                primeCount++;
            }
        }
        return primeCount;
    }
};

int main(){
    cout << "Enter a number to get all primes below that number: " << endl;
    int n;
    cin >> n;
    Solution A;
    int primeCount = A.countPrimes(n);
    cout << primeCount << endl;
}
    
