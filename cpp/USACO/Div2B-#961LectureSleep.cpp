#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
   int n, k; cin >> n >> k;
   int theorems[n] ;
   int sleep[n];
   int maxTheorems = 0;
   long long sum = 0;

   for(int x=0; x<n; x++){
    int num; cin >> num;
    theorems[x]= num;
 }

   for(int x=0; x<n; x++){
    int num; cin >> num;
    sleep[x] = num;
    if(sleep[x] == 1){
      sum += theorems[x];
      theorems[x] = 0;
    }
   }
   int cs[100001];
   cs[0] = 0;
   for(int x=1; x<=n; x++){
    cs[x] = cs[x-1] + theorems[x-1];
   }


  long long max  = 0;
  for(int x = n; x>=k; x--) {
    max  = std::max(max, 1LL * cs[x] - cs[x-k]);
  }

cout <<max  + sum<< endl;
}

