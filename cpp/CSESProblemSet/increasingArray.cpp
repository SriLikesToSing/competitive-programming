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

int main(){
   long long n; cin >> n;
   long long arr[n];
   for(int x=0; x<n; x++){
        int num; cin >> num;
        arr[x] = num;
   }
   long long count = 0;
   for(int x=1; x<n; x++){
    if(arr[x] < arr[x-1]){
        count+= (arr[x-1]-arr[x]);
        arr[x] += arr[x-1]-arr[x];
    }
   }
   cout << count << endl;

}
