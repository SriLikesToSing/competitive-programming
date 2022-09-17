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
   int left[n];
   int right[n] ;
   for(int x=0; x<n; x++){
    int numLeft, numRight; cin >> numLeft >> numRight;
    left[x] = numLeft;
    right[x] = numRight;
   }

   int L0= 0;
   int L1 = 0;
   int R0= 0;
   int R1 =0;
   int count = 0;


   for(int x=0; x<n; x++){
    if(left[x] == 0) {
        L0++;
    }else if(left[x] == 1 ){
        L1++;
    }
   }

   count+=std::min(L0, L1);

   for(int x=0; x<n;x++){
    if(right[x] == 0){
        R0++;
    }else if(right[x] == 1){
        R1++;
    }
   }

   count+=std::min(R0, R1);










   cout << count << endl;




}
