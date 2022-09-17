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
    string s; cin >> s ;
    string result = "NO";

   int len = 1;
   for(int x=1; x<s.length(); x++) {
    if(s[x]==s[x-1]){
       len++;
    }else{
        len = 1;
    }
   // cout << len << endl;
    if(len == 7){
        result = "YES";
        break;
    }



   }


   cout << result << endl;

}
