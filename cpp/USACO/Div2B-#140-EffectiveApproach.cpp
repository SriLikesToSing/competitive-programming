#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
using namespace std;


int main(){
    map<int, int> ma;
    long long first = 0;
    long long second = 0;
    int n;
    cin >> n;
    for(int x=0; x<n; x++){
        int num; cin >> num;
        ma[num] = x;
    }

    int q; cin >> q;
    for(int x=0; x<q; x++){
        int bruh;
        cin >> bruh;
        first+=ma[bruh]+1;
        second +=n-ma[bruh];
    }




cout << first<< " " << second << endl;




}
