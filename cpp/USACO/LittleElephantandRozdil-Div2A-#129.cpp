
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
   int arr[n] ;
   for(int x=0; x<n;x++){
    int num; cin >> num ;
    arr[x] = num;
   }

   int min = INT_MAX;
   int minIndex = 0;
   for(int x=0; x<n; x++) {
        if(arr[x] <= min){
            min = arr[x];
            minIndex = x;
        }
    }
    bool bruh = false;
    for(int x=0; x<n; x++){
        if(x == minIndex){
            continue;
        }
        if(arr[x] == arr[minIndex]){
            bruh = true;
            break;
        }
    }



    if(bruh == true){
        cout << "Still Rozdil" << endl;
    }else{
        cout << minIndex+1 << endl;
    }

}
