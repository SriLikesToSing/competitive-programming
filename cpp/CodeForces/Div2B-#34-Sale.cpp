#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
  int n,m;
  cin >> n >> m;

 int arr[n];
 for(int x=0; x<n; x++){
    int bruh;
    cin >> bruh;
    arr[x]  = bruh;
 }
int z = sizeof(arr)/sizeof(arr[0]);
sort(arr, arr+z);
int len = sizeof(arr)/sizeof(arr[0]);

int sum =0;
int maxSum =1000000000;

for(int x=0; x<m; x++){
  sum += arr[x];
  if(sum <= maxSum){
    maxSum = sum;
  }

//  cout << sum<< endl;
}
cout << std::abs(maxSum) << endl;





}
