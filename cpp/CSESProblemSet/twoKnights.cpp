#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    if(n == 1){
        cout << 0 << endl;
    }else if(n == 2){
        cout << 0 << endl;
        cout << 6 << endl;
    }else{
        cout << 0 << endl;
        cout << 6 << endl;
    long long factor = 1;
    long long multiplier = 1;
    for(int x=3; x<=n; x++){
        long long bruh = (long long) x;
        long long num = ((bruh*bruh)*((bruh*bruh)-1))/2;
        long long ans = num-(factor*8);
        multiplier+=1;
        factor+=multiplier;
        cout << ans << endl;
    }
  }














}
