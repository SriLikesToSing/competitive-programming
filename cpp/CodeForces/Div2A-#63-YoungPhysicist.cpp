#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    int n;
    cin >> n;
    int xSum = 0;
    int ySum = 0;
    int zSum = 0;

    for(int bruh=0; bruh<n; bruh++) {
        int x, y, z;
        cin >> x >> y >>z ;
        xSum += x;
        ySum +=y;
        zSum +=z;

    }

    if(xSum == 0 && ySum == 0 && zSum == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


}
