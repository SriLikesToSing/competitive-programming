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
   long long t; cin >> t;

   for(int x=0; x<t; x++) {
    long long n;  cin >> n;
    vector<long long > arr;
    long long min = INT_MAX;
    long long index = 0;
    for(int x=0; x<n; x++){
        int num; cin >> num;
        arr.push_back(num);
        if(num< min){
            min = num;
            index = x;
        }
    }

    std::vector<long long > results;
    results.reserve(arr.size() + arr.size());
    results.insert(results.end(), arr.begin(), arr.end());
    results.insert(results.end(), arr.begin(), arr.end());
sort(arr.begin(), arr.end());

for(int x=arr.size()-2; x>=0; x--){
    if(arr[x] == arr[x+1]){
        arr.erase(arr.begin()+x);
    }
}
   long long max = arr[0];
   long long in = 0;
   long long count = 1;
    for(int x=0; x<results.size(); x++){
        if(in== arr.size()-1){
            break;
        }
        if(results[x] == max){
            count++;
            in++;
            max = arr[in] ;
        }
     }
     cout << count << endl;
    }
}


