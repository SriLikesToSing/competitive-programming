#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin  >> n;
    int arr[n] ;
    for(int x=0; x<n; x++){
        int num ; cin >> num;
        arr[x] = num;
    }

    double sum = 0.0;

  for(int x=0; x<n; x++) {
    sum+= arr[x] * 1.0 /100;
    cout << arr[x] << endl;
  }

    cout << (double)sum * 1.00000000000000000000000  / (double)n << endl;
}
