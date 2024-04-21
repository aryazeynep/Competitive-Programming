//
// Created by HP on 28.02.2024.
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
#define ll long long

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> dumbbles(n);
    for (int i = 0; i < n; ++i) {
        cin >> dumbbles[i];
    }

    /* old bad
     *
     *
     std::vector<std::vector<int>> startEnd(q, std::vector<int>(2));

    for (int i = 0; i < q; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cin >> startEnd[i][j];
        }
    }
     *
     *
     *
    for (int i = 0; i < q; ++i) {
        int printNum = 0;
        for (int k = startEnd[i][0]-1; k < startEnd[i][1]; k++){
            printNum = printNum + dumbbles[k];
        }
        cout << printNum << endl;
    }
    */
    vector<int> cum(n);
    cum[0] = dumbbles[0];
    for (int i = 1; i < n; ++i) {
        cum[i] = cum[i-1] + dumbbles[i];
    }

    for (int i = 0; i < q; ++i) {
        int l,r;
        cin >> l >> r;
        cout << cum[r-1] - cum[l-2]<< endl;
    }



}