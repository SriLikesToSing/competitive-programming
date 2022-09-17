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
   int n, m; cin >> n >> m;
   int arr[m];
   int max[m];
   int min[m];

   for(int x=0; x<n; x++){
    int num ;cin num;
    arr[x] = num;
   }
   max = arr;
   min = arr;
   int minSum = 0;
   int maxSum = 0;
   for(int x=0; x<n; x++){
    int tempMin = INT_MAX;
    int minIndex = 0;
        for(int y=0; y<m; y++) {
            if(min[y] <= tempMin){
                minIndex = y;
                tempMin = min[y];
            }
        }
        min[minIndex]--;

   }


   for(int x=0; x<n; x++){
        for(int y=0; y<m; y++) {

        }
   }





}
