#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
#include <set>
#include <iterator>
#define pb push_back
//using vi = vector<int>;
using ll = long long;
using namespace std;

string s;
vector<char> bruh;

bool chosen[8] = {false};


void solve(){
    if(bruh.size() == s.length()){
        for(int x=0; x<bruh.size(); x++) {
            cout << bruh[x];
        }
        cout << endl;
    }

    for(int x=0; x<s.length(); x++){
       if(chosen[x]) continue;
       chosen[x] = true;
       bruh.pb(s[x]);
       solve();
       chosen[x] = false;
       bruh.pop_back();
    }
}

int main(){
    cin >> s;
    solve();
}
