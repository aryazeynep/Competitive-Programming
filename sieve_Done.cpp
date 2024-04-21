#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

//function that check if an integer is prime or not.
//for efficiency, it only checks up to root n numbers.
//work correctly
bool isPrime(int num){
    if (num <= 1){
        return false;
    }
    else if (num == 2){
            return true;
    }
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

//main part of the code
int main() {
    //get inputs
    int n;
    cin >> n ;

    //a vector for Sieve of Eratosthenes Approach
    vector<bool> vec(n, true);
    vec[0] = false; //1 is not prime

    for (int k = 2; k*k <= n ; k++){
        if (vec[k-1]){
            if (isPrime(k)){ //if the int is prime, only multiplies of int become false
                for (int s = 2; s*k<=n;s++){
                    vec[s*k-1] = false;
                }
            }
            if (!(isPrime(k))){ //if the int is not prime, int and multiplies become false
                vec[k-1] = false;
                for (int s = 2; s*k<=n;s++){
                    vec[s*k-1] = false;

                }
            }
        }
    }

    //count prime(true) numbers in the vec
    int count = 0;
    for (int t= 0; t < n ; t++){
        if (vec[t]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

//Congratulations
//Your submission is complete!