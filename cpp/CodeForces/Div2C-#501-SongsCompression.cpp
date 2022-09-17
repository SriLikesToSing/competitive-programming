#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
   int n, m; cin >> n >> m;
   int before[n]; int after[n];

   for(int x=0; x<n; x++) {
    int a, b; cin >> a>> b;
    before[x] = a;
    after[x] = b;
   }



   for(int x=0; x<n-1; x++){
    for(int y=1; y<n; y++){
        if(std::abs(after[y-1]-before[y-1]) <= std::abs(after[y]-before[y])){
            int temp = after[y-1];
            after[y-1] = after[y];
            after[y] = temp;

            int temp1 = before[y-1];
            before[y-1] = before[y];
            before[y] = temp1;
        }
    }
   }
/*
   for(int x=0; x<n; x++){
    cout << before[x] << " " << after[x] << endl;
   }
   */

   int sum =0;
   int prevCount =0;


   for(int x=1; x<=n; x++){
    int count = 0;
    for(int y=0; y<n; y++){
        if(count<x){
            sum+=after[y];
            count++;
        }else{
           sum+=before[y];
         }
    }
//    cout << sum << endl;
    if(sum <= m && x <n){
        prevCount  = x;
        break;
    }else if(sum> m && x== n){
 //       cout << "X" << endl;
  //      cout << x << endl;
       prevCount = -1;
    }
    sum = 0;
   }

   cout << prevCount<< endl;





}
