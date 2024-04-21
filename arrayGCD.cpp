//
// Created by HP on 7.02.2024.
//
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
const int MOD = 1000000007;

// Euclidean algoritması ile iki sayının GCD'sini bulan fonksiyon
int findGCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = (a % b) ;
        a = temp;
    }
    return a;
}


// Bir dizinin GCD'sini bulan fonksiyon
long long findArrayGCD(long long arr[], long long n) {
    long long result = arr[0];

    for (int i = 1; i < n; i++) {
        result = findGCD(result, arr[i]);

        // Eğer GCD 1 ise, geri kalanı kontrol etmeye gerek yok, sonuç zaten 1 olacaktır
        if (result == 1) {
            break;
        }
    }

    return result;
}


int main() {
    long long n;
    cin >> n;

    long long fi[n];

    for (long long i = 0; i < n; ++i) {
        cin >> fi[i];
    }

    long long result = findArrayGCD(fi, n);

    std::cout << result << std::endl;
    

}