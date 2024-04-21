#include <iostream>

using namespace std;
#define  ll long long
int main() {
    ll n, k,h;
    cin >> n >> k;
    k--;
    k%=2*(n-1);
    k++;
    if(k>n) {
        ll fazla=k-n;
        k=n-fazla;
        h=(k*3)/2;

        if(k%2==0) {


            cout << h-1<<" "<<h;
        } else {
            cout << h;
        }


    } else {
        h=(k*3)/2;

        if(k%2==0) {


            cout << h-1<<" "<<h;
        } else {
            cout << h;
        }
    }



    return 0;
}