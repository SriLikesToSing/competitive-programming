#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool bruh = false;
    for(int x=0; x<5; x++) {
        string bruh;
        cin >> bruh;
        cout << s[0] << " " << bruh[0] << endl;
        if(s[0] == bruh[0] || s[1] == bruh[1]){

            bruh = true;
            break;
        }
    }
    if(bruh == true){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }






}

