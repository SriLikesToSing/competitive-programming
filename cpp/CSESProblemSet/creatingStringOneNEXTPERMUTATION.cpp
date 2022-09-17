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

int main(){
    vector<string> permutation;
    string s; cin >> s;
    std::sort(s.begin(), s.end());

    do{
        permutation.push_back(s);
    } while(next_permutation(s.begin(), s.end()));
    cout << permutation.size() << endl;
    for(int x=0; x<permutation.size(); x++){
        cout << permutation[x] << endl;
    }

    while(t--){

    }
}
