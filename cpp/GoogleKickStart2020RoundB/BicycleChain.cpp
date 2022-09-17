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
   int pedal[n];

   for(int x=0; x<n; x++){
    int num; cin >> num;
    pedal[x] = num;
   }
   int m; cin >> m;
   int rear[m];

   for(int x=0; x<m; x++){
    int num; cin>> num;
    rear[x] = num;
   }

   int max = INT_MIN;
   int count = 1;
   for(int x=0; x<m; x++){
    for(int y=0; y<n; y++){

        if(rear[x]%pedal[y] == 0 && rear[x]/pedal[y] > max){
            max = rear[x]/pedal[y];
//        cout <<"rear[x]/pedal[y]"  << endl;
//        cout <<rear[x] << " " << pedal[y]  << endl;
            count=1;
        }else if(rear[x]/pedal[y] == max && rear[x]%pedal[y] == 0){
            count++;
        }
      }
   }
   cout << count << endl;
}










