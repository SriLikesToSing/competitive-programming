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
#include <utility>
#include <iterator>
using namespace std;
using vi = vector<int>;
#define pb push_back
using ll = long long;

int main(){
    int n; cin >> n;
    vi A;
    int ans = n-1;
    int n; cin >> n;
    for(int x=0; x<n; x++){
        int num; cin >> num;
        A.pb(num);
    }
    for(int x=n-2; x>=0; x--){
        if(A[x]<A[x+1]){
            cout << A[x] << endl;
            ans = x;
        }else{
            break;
        }
    }
    cout << ans << endl;
}
