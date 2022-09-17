#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;

int main(){
    int k; cin >> k;
    string s; cin >> s;
    vector<string> letterCount;
    bool counted = false;
    int no = -1;
    string result;
    for(int x=0; x<s.length(); x++){

        letterCount[x] = 0;
    }

    for(int x=0; x<s.length(); x++){
        for(int y=0; y<=x; y++){
            if(letterCount[x] == s[y]){
                letterCount[x]++;
                counted = true;
                break;
            }
        }
        if(counted == false){
            letterCount;
        }
    }

    for(int x=0; x<letterCount.size(); x++){
        if(letterCount[x]%k!=0){
            break;
        }else{

        }
    }













}
