#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;

int main(){
   int n, m;  cin >> n >> m;
   int arr[n] ;
   int countNeg = 0;
   for(int x=0; x<n;x++){
    int num; cin >> num;
    arr[x] = num;
    if(num<=0){
    countNeg++;
    }
   }
 int i = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+i);
     int sum = 0;
     int bruh;
     if(countNeg<m && countNeg >0){
        bruh = countNeg;
     }else if(countNeg>=m){
        bruh = m;
     }else if(countNeg == 0){
        bruh = 0;
     }


    for(int x=0; x<bruh; x++){
//        cout << arr[x] << endl;
        sum+= abs(arr[x]);
    }

    cout << abs(sum) << endl;

}




