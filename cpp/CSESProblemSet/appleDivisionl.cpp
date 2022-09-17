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
using namespace std;
using ll = long long;

int n; ll weights[20];

ll solve(int i, ll s1, ll s2){
    if(i == n){
        return abs(s1 - s2);
    }
    return min(solve(i + 1, s1 + weights[i], s2), solve(i + 1, s1, s2 + weights[i]));
}

int main(){
    cin >> n;
    for(int x=0; x<n; x++){
        cin >> weights[x];
    }
    cout << solve(0, 0, 0) << endl;
}
