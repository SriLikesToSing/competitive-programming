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
    int n; cin >> n;
    int arr[n];
    for(int x=0; x<n; x++){
        int num; cin >> num;
        arr[x] = num;
    }

   int min = INT_MAX;
   int index1, index2;
   for(int x=1; x<n; x++) {
    if(abs(arr[x] - arr[x-1]) <= min){
        min = abs(arr[x]-arr[x-1]);
        index1 = x+1;
        index2 = (x-1)+1;
    }
   }
   if(abs(arr[n-1]-arr[0]) <= min){
    min =abs(arr[n-1]-arr[0]) ;
    index1 =n;
    index2 = 1;
   }

   cout << index1 << " " << index2 << endl;



}
