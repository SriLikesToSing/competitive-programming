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
   int n, m; cin >> n >> m;
   int arr[m] ;
   for(int x=0; x<n; x++){
    int num; cin >> num; arr[x] = num;
   }





   int n; cin >> n;
   vector<int> arr;
   for(int x=0; x<n; x++){
    int num; cin >> num;
    arr.push_back(num);
   }

   for(int x=0; x<n; x++){
    for(int y=0; y<n; y++){
        if(arr[x] == arr[y]){
            cout << "hi" << endl;
        }else{
            cout <<"bye" << endl;
        }
    }
   }









}
