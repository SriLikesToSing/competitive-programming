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
   int n; cin >> n;
   int arr[n] ;
   for(int x=0; x<n; x++){
    int num; cin >> num;
    arr[x] = num;
   }

   int count = 0;
   int max = arr[0];
   int min = arr[0];
  for(int x=1; x<n; x++) {
    if(arr[x] > max){
        max = arr[x];
        count++;
    }else if(arr[x] < min){
        min = arr[x];
        count++;
    }
  }

  cout << count << endl;


}
