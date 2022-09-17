
/*
ID: 286002
PROG: beads
LANG: C++11
*/



#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    ifstream fin("beads.in");
    ofstream fout("beads.out");
   int n; fin >> n;
   string s; fin >> s;

   int longest =0;
   int countSame = 1;
        for(int same=1; same<n; same++){
            if(s[same] == s[same-1]){
                countSame++;
            }
        }
        if(countSame == n){
            longest = n;
            n = 0;
        }
   for(int x=2; x<n; x++){
    if(countSame == n){
      break;
    }
         int tempLeft = 0;
         int tempRight = 0;
         char keyLeft = s[x-1];
         char keyRight  = s[x];
         int startIndexRight = x;
         int startIndexLeft = x-1;
         bool seen = false;

        for(int y = startIndexLeft; y>=0; y--) {
            if(s[y] == keyLeft || s[y] == 'w' || (s[y] == 'w' && s[y+1] == keyLeft && s[y+1] == keyLeft)){
                tempLeft++;
                cout << s[y] <<"";
            }else if(s[y] != keyLeft){
                break;
            }
        }

        for(int z = startIndexRight; z<n; z++){
            if(s[z] == keyRight || s[z] == 'w'){
                tempRight++;
              }
              else if(s[z] != 'w' && s[z-1] == 'w' && seen == false && keyRight == 'w'){
                  seen = true;
                  keyRight = s[z];
                  tempRight++;
            }else if(s[z] != keyRight){
                break;
            }
            if(z == n-1){
              z =-1;
              continue;
            }
        }
        cout << tempRight + tempLeft << endl;

        if(tempRight+tempLeft >= longest){
            longest = tempRight+tempLeft;
        }
   }
   fout << longest << endl;
}

