
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
    int n; cin >> n;
    int numVer[n];
    int numHor[n];
    bool isVer[n] = {false};
    bool isHor[n] = {false};
    for(int x=0; x<n; x++){
        numVer[x] = x+1;
        numHor[x] = x+1;
    }


    for(int x=0; x<n*n; x++) {
        int numX, numY; cin >> numX >> numY;
        for(int x=0; x<n; x++){
            if(numHor[x] == numX){
                isHor[x] = true;
            }else if(numVer[x] == numY){
                isVer = true;
            }
        }
    }





    for(int x=0; x<n; x++){
        if()
        cout << pos[x] << " ";
    }

}
