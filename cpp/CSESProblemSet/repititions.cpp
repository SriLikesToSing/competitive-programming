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
    string s; cin >> s;
    long long maxStreak = 1;
    long long streak = 1;


    for(int x=1; x<s.length(); x++){
        if(s[x] == s[x-1]){
            streak++;
            maxStreak = max(maxStreak, streak);
    }else{
        streak = 1;
    }
}

    cout << maxStreak<< endl;




}
