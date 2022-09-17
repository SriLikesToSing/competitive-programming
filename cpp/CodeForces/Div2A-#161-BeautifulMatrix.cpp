#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
/*
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
*/
    int arr[5][5];
    int xMid = 2;
    int yMid = 2;

    int xCord = 0;
    int yCord = 0;

   for(int x=0; x<5; x++) {
    for(int y=0; y<5; y++){
        int num;
        cin >> num;
        arr[x][y] = num;
       // cout << "arr[x][y]" << endl;
        //cout << arr[x][y] << endl;
        if(arr[x][y] == 1){
//            cout << "HI" << endl;
            xCord = x;
            yCord = y;
        }
//        cout << x << " " << y << endl;
    }
}
//   cout << xCord << " " << yCord << endl;

   int numMoves = std::abs((xCord-xMid)) + std::abs((yCord-yMid));

   cout << numMoves << endl;












}
