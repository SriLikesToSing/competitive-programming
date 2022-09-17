#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){
   int n; cin >> n;
   int val = 0;
   for(int x=0; x<n; x++) {
    string s; cin >> s;
    if(s == "++X" || s== "X++"){
        val++;
    }else if(s== "--X" || s== "X--"){
        val--;
    }
   }
   cout << val << endl;





}
