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
int t; cin >> t;

for(int x=0 ;x<t; x++){

    int n, d; cin >> n >> d;

    int arr[n];
    int currVal = d;
    for(int z=0; z<n; z++){
        int num; cin >> num;
        arr[z] = num;
    }

    for(int y=n-1; y>=0; y--){
        cout << arr[y] <<" " << currVal << endl;
        if(currVal%arr[y]== 0){
            continue;
        }else if(currVal%arr[y]> 0){
            currVal = arr[y] * (currVal/arr[y]);
        }
       }

        /*
        for(int y=arr[x]; y<=currVal; y+=arr[x]){
            numDays=y;
        }
        */

    cout << "Case #" << x+1 << ": " << currVal<< endl;
}


}




