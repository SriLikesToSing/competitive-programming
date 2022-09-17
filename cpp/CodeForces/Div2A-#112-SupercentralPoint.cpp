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
   int n; cin >>n;
   int arrX[n];
   int arrY[n];
   int count = 0;
   bool left = false;
   bool right = false;
   bool up  = false;
   bool down = false;


   for(int x=0; x<n; x++){
    int numX, numY; cin >> numX >> numY;
    arrX[x]= numX;
    arrY[x] = numY;
   }



   for(int x=0; x<n; x++){
    for(int y=0; y<n; y++){
        if(x==y){
            continue;
        }
        if(arrY[y] == arrY[x] && arrX[x] < arrX[y]){
            right = true;
        }
        if(arrY[y] == arrY[x] && arrX[x] > arrX[y]){
            left= true;
        }
        if(arrY[y] < arrY[x] && arrX[x]  == arrX[y]){
            down = true;
        }
        if(arrY[y] > arrY[x] && arrX[x] ==  arrX[y]){
            up = true;
        }
    }
    if(left == true && right == true && up == true && down == true){
        count++;
}
        left = false; right = false; up = false; down = false;
}
   cout << count << endl;

}
