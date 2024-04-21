#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

long long fastExpo(int base, int power) {
    long long result = 1;
    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (1LL * base * base) % MOD;
        //power /= 2; //tek sayıyı kaybetmemek için yukarıda düzelttik, resulta aldık
        power = ((power% MOD) / 2) %MOD;
    }
    return result;
}

int main() {
    //input 43643 0, output 1
    int n, m;
    cin >> n;
    cin.ignore();
    cin >> m;
    int f = fastExpo(n,m);
    cout << f;

}