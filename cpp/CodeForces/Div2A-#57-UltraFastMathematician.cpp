#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){

   string s, ss; cin >> s >> ss;
   string result;
   for(int x=0; x<s.length(); x++) {
    if(s[x] == ss[x] ){
        result+='0';
    }else if(s[x] != ss[x]){
        result+='1';
    }
   }

   cout << result << endl;

}
