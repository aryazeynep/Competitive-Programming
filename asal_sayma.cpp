//
// Created by HP on 3.01.2024.
//

//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

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

int main() {
// write your code here
// input 5, output 3 (2,3,5)
// şimdi bir sayımız var, bu sayıya kadar olan asal sayıların toplam kaç tane olduğunu bulmamız gerekiyor
// n sayısına kadar her m sayısı m sayısına kadar olan sayılara bölünüyor mu diye kontrol edebiliriz ama efficient olmaz
// ama şimdilik böyle yapalım, ara tatilde düzeltiriz ya
// tabi ilk input almamız lazım he he :)

    int n;
    cin >> n;

    if (n < 2){
        cout << 0;
    } else {
        int countVal = 0;
        for (int m = 2; m<=n; m++){
            bool control = true;
            for (int s = 2; s<m; s++){
                if (m%s == 0){
                    control = false;
                }
            }
            if (control){
                countVal++;
            }
        }
        cout << countVal;
    }



        return 0;
}

