#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
#include <functional>
using namespace std;

int main(){
   long long n; cin >> n;
   int arr[n];
   int arr2[n];
   vector<int> num1;
   vector<int> num2;

   int sum = 0;
   for(int x=1; x<=n; x++){
        sum+=x;
        arr[x-1]=x;
   }

   if(sum%2==0){
    cout << "YES"<<endl;
   }else{
    cout <<"NO"<<endl;
   }

   for(int x=n; x>0; x--){
      arr2[x] = x;
   }

   if(n%2==0){
   bool bruh = false;
   for(int x=n; x>=0; x-=2){
    num1.push_back(arr2[x]);
   }

    for(int x=1; x<n+1; x-=2){
      cout << arr2[0] <<endl;
    num2.push_back(arr2[x]);
    }

   }



}














