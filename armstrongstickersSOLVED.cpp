
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
    ll n; //bize verilen esas sayı
    cin >> n;

    //bir tane vector oluştururuz int
    //her döngüde bölü 10da elde ediileni yani mod, vectöre ekleriz kural da 0 dan ya da 1 den küçük olması olur
    //sonra normal işlemleri yaparız

    string s1 = to_string(n);

    while (s1.size() > 1){
        //yeni vektör oluşturarak küçültme işlemi
        vector<int> usNum;
        bool control = true;

        while (control){
            string s = to_string(n);
            if (s.size() > 1){ //bölünme işlemi devam ediyor
                int lilPart = n%10;
                n = n / 10;
                usNum.push_back(lilPart);
            }
            else{
                usNum.push_back(n);
                control = false;
            }
        }
        //şimdi n = yeni çarpılmış değer yapacağız
        n = 1;
        for (int i = 0; i<usNum.size(); i++){
            if (usNum[i] != 0){
                n = n*usNum[i];
            }
        }

        s1 = to_string(n);
    }
    cout << n;
}