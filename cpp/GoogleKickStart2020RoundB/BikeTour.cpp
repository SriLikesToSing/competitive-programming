
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
   int t; cin >> t;

   for(int x=0; x<t; x++) {
    int n; cin >> n;

    int arr[n];

    for(int x=0; x<n; x++){
        int num; cin >> num;
        arr[x] = num;
    }
    int count = 0;
    for(int x=1; x<n-1; x++){
        if(arr[x] > arr[x-1] && arr[x] > arr[x+1]){
            count++;
        }
    }
           cout << "Case #" << x+1 << ": " <<  count << endl;


   }



}
