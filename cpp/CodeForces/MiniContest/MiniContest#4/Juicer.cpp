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
    int n, b, d; cin >> n >> b >> d;
    int arr[n]; for(int x=0; x<n; x++){int num; cin >> num; arr[x] = num;}
    int count = 0;
    int tempCount = 0;
    for(int x=0; x<n; x++){
        if(arr[x] > b){
            continue;
        }
       tempCount+=arr[x];
       if(tempCount>d){
        count++;
        tempCount = 0;
       }
    }


    cout << count << endl;



}
