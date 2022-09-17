#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){

   int n; cin >> n;
   int arr[n];
   string s;
   int dp[200000][200000];
   string bruh = "YES"
   for(int x=0; x<n; x++) {
    int num; cin >> num;
    arr[x] = num;
   }
    cin >> s;

    dp[0] = arr[0];

   for(int x=1; x<n; x++) {
    dp[x] = arr[x];
        if(dp[x] < dp[x-1]){
            if(s[0] == '1'){
               int temp = dp[0];
                dp[0] = dp[1];
                dp[1] = temp;
            }
        }else{
            bruh = "NO";
            break;
        }
   }














}
