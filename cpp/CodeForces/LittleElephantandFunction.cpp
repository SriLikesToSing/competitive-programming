#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int x=0; x<n; x++){
        arr[x]= x+1;
      //  cout << arr[x] << endl;
    }

    for(int x=n-1; x>=1; x--){
        int temp = arr[x];
       arr[x] = arr[x-1];
       arr[x-1] = temp;
      }

      for(int x=0; x<n;x++){
        if(n == 1){
            cout << 1 << endl;
            break;
        }
        cout << arr[x] << " " ;
      }




}
