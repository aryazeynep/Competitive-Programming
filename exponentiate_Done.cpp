#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

long long fastExpo(long long base, long long power) {
    long long result = 1;
    base %= MOD;
    //power %= MOD; burası olursa hata veriyor

    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2 ; //buraya mod koymak da hata veriyor, neden bilmiyorum ama power a mod konulmamalı
    }
    return result;
}

int main() {
    //input 43643 0, output 1
    long long n, m;
    cin >> n >> m;  // Read both values in a single line
    long long f = fastExpo(n,m);
    cout << f;

}