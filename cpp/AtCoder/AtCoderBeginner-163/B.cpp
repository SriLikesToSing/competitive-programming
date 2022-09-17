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

int main() {
    int n, m; cin >> n >> m;
    int arr[n];
    int sum = 0;
    for(int x=0; x<m; x++) {
        int num; cin >> num;
        arr[x] = num;
    }

    for(int x=0; x<m; x++){
        sum+=arr[x];
    }

    if(sum > n){
        cout << -1 << endl;

    }else{
        cout << n-sum << endl;
    }



}
