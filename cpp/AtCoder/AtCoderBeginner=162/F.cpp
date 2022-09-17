#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){
   long long n;
   cin >> n;
   long long arr[n] ;
   long long dp[n];
   for(int x=0; x<n; x++){
    long long num; cin >> num;
    arr[x] = num;
   }

   dp[0] = arr[0];
   dp[1] = arr[1];
   for(int x=2; x<n; x++){
     dp[x] = 0;
   }


   for(int x=2; x<n; x++){
     if(dp[x-2] + arr[x] >= dp[x-1]) {
        dp[x] = dp[x-2]+dp[x];
     }else if(dp[x-1] >= arr[x-2] + arr[x]){
        dp[x] = arr[x-1];
     }
     cout << arr[x] << endl;

   }



   cout << dp[n-1] << endl;









}
