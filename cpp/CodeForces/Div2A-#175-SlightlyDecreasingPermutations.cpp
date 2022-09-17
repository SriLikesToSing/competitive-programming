#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n ,k;
    cin >> n >> k;
    int defaultArr[n];
   for(int x=0;x<n; x++){
    defaultArr[x] = x+1;
   }


   int arr[n];
   for(int x=0; x<n; x++) {
    if(k == 0){
        break;
    }
    if(x == k-1){
        arr[x] = n;
    }else if (x == k) {
        arr[x] = 1;
   }

   }
    int num = 2;
   for(int z=0; z<n; z++){
    if(z ==k || z == k-1){
        continue;
    }

        arr[z] = num;
        num++;


   }
 if(k==0){


  for(int y=0; y<n; y++){
    cout << defaultArr[y] << " " ;
  }
}else{
  for(int y=0; y<n; y++){
    cout << arr[y] << " " ;
  }

}



}
