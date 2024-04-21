
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

int main() {
    long long n;
    cin >> n;

    long long fi[n];

    for (long long i = 0; i < n; ++i) {
        cin >> fi[i];
    }

    long long count = 0;
    long long bigger = fi[0];

    for (int i = 1; i<n; i++){
        if (fi[i] > bigger){
            bigger = fi[i];
            count++;
        }
    }
    cout<<count;


}