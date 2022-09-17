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
   int arr[n+1] ;
   int ways =0;
   vector<int> bruh;

   arr[0] = 0;
   int sum = 0;
   for(int x=1; x<n; x++){
    int num; cin >> num;
    arr[x] = num;
    sum += num;
   }


   for(int x=1; x<=5; x++){
    arr[0] = x;
    int index = 0;
    for(int y=0; y<n+1; y++){
        index = index+arr[index]%(n+1);
    }
        cout << index << endl;
    if(index > 0){
        ways++;
    }
   }


   cout << ways << endl;
}
