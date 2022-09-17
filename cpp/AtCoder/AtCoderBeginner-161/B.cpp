#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;

   double arr[n] ;
   int sum =0;
   for(int x=0; x<n; x++) {
    int bruh;
    cin>> bruh;
    arr[x] = bruh;
    sum += bruh;
   }
   int count = 0;
   double ratio = 1.0/(4*m);
 //  cout << ratio << endl;
   for(int x=0; x<n; x++){
    double result = arr[x]/sum * 1.0;
//        cout << result << endl;
    if(result>=ratio){
  //      cout << result << endl;
        count++;
    }

   }

   if(count >=m){
    cout << "Yes" << endl;
   }else if(count< m){
    cout << "No" << endl;
   }


}
