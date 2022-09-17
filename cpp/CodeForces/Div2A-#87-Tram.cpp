
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
   int enter[n];
   int leave[n];
   for(int x=0; x<n;x++){
    int num1, num2;
    cin >> num1 >> num2;
    leave[x] = num1;
    enter[x] = num2;
   }

   int on = 0;
   int off = 0;
    on += enter[0] - leave[0];
   int max = on;
   for(int x=1; x<n; x++){
    on-=leave[x];
    on+=enter[x];
    if(on >= max){
        max = on;
    }
   }

   cout << max << endl;




}
