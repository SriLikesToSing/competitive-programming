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
    int n; cin >> n;
    int sum = 0;
    int arr[n]; for(int x=0; x<n; x++){int num; cin >> num; arr[x] = num; sum+=num;}
    int miniSum = 0;
    bool bruh = false;


while(bruh == false){
   // cout <<"hi" << endl;
    for(int x = 0; x<n; x++){
        for(int y=0; y<n; y++){
            if(y ==x){
                continue;
            }
//            cout << arr[x] << " "  << arr[y] << endl;
            if(arr[x] > arr[y]){
                arr[x]-=arr[y];
            }
        }
//            cout << arr[x] << endl;
                miniSum+=arr[x];
    }
    if(miniSum<sum){
        sum = miniSum;
        miniSum = 0;
        continue;
    }else{
        bruh = true;
        break;
    }
}
    sum = 0;
    for(int x=0; x<n; x++){
        sum+=arr[x];
    }

   cout << sum << endl;
}
