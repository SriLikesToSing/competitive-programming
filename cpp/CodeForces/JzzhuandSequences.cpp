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

int main(){
   long long x, y; cin >> x >> y;
   long long n; cin >> n;
   vector<long long> arr;
   arr.push_back(x);
   arr.push_back(y);




   for(int x=0; x<n; x++){

   }


   for(int x=1; x<=n-2; x++){
        arr.push_back(arr[x]-arr[x-1]);
   }
   int bruh = 1000000007;



   cout << (arr[arr.size()-1]%bruh+bruh)%bruh<< endl;





}
