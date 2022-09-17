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
    int arr[n]    ;
    for(int x=0; x<n; x++){
        int num ; cin >> num;
        arr[x] =num;
    }
    int maxIndex = 0;
    int minIndex =0;
    int max = INT_MIN;
    int min = INT_MAX;

    for(int x=0; x<n; x++){
        if(arr[x] >= max){
            max = arr[x];
            maxIndex = x;
        }
        if(arr[x] <= min){
            min = arr[x];
            minIndex = x;
        }
    }
    int minCount = 0;
    int maxCount = 0;
    for(int x=minIndex+1; x<n; x++){
        minCount++;
    }

    for(int x=maxIndex-1; x>=0; x--){
        maxCount++;
    }
    cout << maxCount << endl;
   cout << maxCount + minCount << endl;



}
