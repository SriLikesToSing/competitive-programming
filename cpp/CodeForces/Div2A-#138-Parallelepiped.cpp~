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

   int a1, a2, a3;  cin >> a1 >> a2 >> a3;
   int arr[3] = {a1, a2, a3};
   int sum = 0;
int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);

    int base = std::sqrt(arr[0]);
    int side1 = arr[0]/base;



    int sides = 0;
    for(int x=0;x<n; x++){
        if(arr[x]!=0){
        sides = arr[x]/base;
        break;
       }
    }

    base*=8;
    sides*=4;

    cout << base+sides << endl;




}
