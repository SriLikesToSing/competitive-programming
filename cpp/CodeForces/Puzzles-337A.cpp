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
   for(int x=0; x<m; x++){int num; cin >> num; arr[x] = num;}
   int mini = INT_MAX;
    int i = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+i, greater<int>());

    for(int x=0; x<m; x++){
        for(int y=m-1; y>=0; y--){
//            cout << arr[y] << endl;
                if(x == y || arr[x] < arr[y]){
                    continue;
                }
//                cout << arr[x] << " " << arr[y] << endl;
                if(std::abs(y-x)-1 >= (n-2)){

                    mini = min(mini, arr[x]-arr[y]);
                }
        }
    }
    cout << mini << endl;
}
