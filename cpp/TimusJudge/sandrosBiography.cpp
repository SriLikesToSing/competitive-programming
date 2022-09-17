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
   string s; cin >> s;
   string sandro = "sandro";
   int minCost;
   int count = 0;
   int tempCost = 0;

   for(int x=0; x<s.length(); x++) {
    if(count == 0 && s[x]!=sandro[0]){
        if(!toupper(s[x]))
        count++;
        tempCost+=10;
    }else{
        tempCost+=5;
    }

    if(s[x] == sandro[count]){
       continue;
    }else if(){
        tempCost+=10;
    }
    }else{
        tempCost+=5;
    }
    if(count == 5){
        count = 0;
        minCost = min(minCost, tempCost)
        continue;
    }

    count++;
   }

   cout << minCost << endl;

}
