//
// Created by HP on 27.02.2024.
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
    int n, k;
    cin >> n >> k;

    vector<int> gameCosts(n);
    for (int i = 0; i < n; ++i) {
        cin >> gameCosts[i];
    }

    int Q;
    cin >> Q;

    vector<int> tolerances(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> tolerances[i];
    }

    //inputları doğru aldık şimdi koda geçelim

    for (int i = 0; i < Q; ++i) {
        int down = k - tolerances[i];
        int up = k + tolerances[i];
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (gameCosts[j] <= up && gameCosts[j] >= down){
                count++;
            }
        }
        cout << count << endl;
    }

}