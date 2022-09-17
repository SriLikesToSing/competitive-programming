#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
   int n, c; cin >> n >> c;
   int arr[n];
   int miniCount =1;


   for(int x=0; x<n; x++){
    int bruh; cin >> bruh;
    arr[x] = bruh;
   }

   for(int x=1; x<n; x++){
    if(arr[x] - arr[x-1] <= c && x == 1 ){
        miniCount+=1;
    }else if(arr[x] - arr[x-1] <=c){
        miniCount+=1;
    }else{
        miniCount = 1;
    }
//    cout << miniCount << endl;
   }


    cout <<  miniCount << endl;

}
