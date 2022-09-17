#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){

   int arr[4] = {0};
   for(int x=0;x<4; x++){
    int num; cin >> num;
    arr[x]= num;
   }

int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);

    int count =0;
    for(int x=1; x<4; x++){
        if(arr[x] == arr[x-1]){
            count++;
        }
    }




   cout << count << endl;

}
