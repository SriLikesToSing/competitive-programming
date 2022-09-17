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
    int s, n; cin >> s>> n;
    int count = 0;
    int bonus[n];
    int health[n];

    for(int x=0; x<n; x++){
        int h, b; cin >> h>> b;
        bonus[x] = b;
        health[x] = h;
    }

   for(int x=0; x<n; x++){
    for(int y=1;y<n-x-1; y++){
        if(health[y] < health[y-1]){
            int temp = health[y];
            health[y] = health[y-1];
            health[y-1] = temp;

            int temp1 = bonus[y];
            bonus[y] = bonus[y-1];
            bonus[y-1] = temp1;
        }
     }
   }

    for(int x=0; x<n; x++){
        if(health[x] < s){
            s+=bonus[x];
            count++;
            health[x] = INT_MIN;
            bonus[x] = INT_MIN;
        }
    }

   for(int x=0; x<n; x++){
    if(health[x] == INT_MIN){
        continue;
    }
    if(s <= health[x]){
       break;
    }else{
        s+=bonus[x];
    }
        count++;
   }

    if(count == n){
        cout << "YES" << endl;
    }else if(count<n){
        cout << "NO" << endl;
   }

}
