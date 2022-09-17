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

   int k; cin >> k;
   int arr[12] ;
   for(int x=0; x<12; x++){
    int num; cin >> num;
    arr[x] = num;
   }
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, greater<int>());

    int sum = 0;
    int count = 0;
    int c = 0;
    for(int x=0; x<12; x++){
        sum+=arr[x];
//        cout << count << endl;
        if(sum>=k){
            count++;
            break;

        }else{
            count++;
        }
        c++;
    }


   if(k == 0){
    count = 0;
   }else if(c ==12){
    count = -1;
   }

    cout << count << endl;
}


