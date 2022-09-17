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
   string s; cin >> s;
   string arr[n];

   for(int x=0; x<n; x++){
     arr[x] = s[x];
   }

   int count = 0;
   int startPos = 0;
   for(int x=0; x<s.length()-1; x+=2){
    if(x == s.length()-1 && s.length()%2 == 1){
        s = s.substr(0, s.length()-1);
        break;
    }
    if(arr[x+1] == arr[x]){
        cout << s.substr(x+2, s.length()) << endl;
        s=(s.substr(startPos, x) + s.substr(x+1, s.length()));
        startPos = x;
        count++;
    }else{
        continue;
    }
   }

   if(s.length()%2 ==1){
        s= s.substr(0, s.length()-1);
   }


cout << count << endl;
if(s.length() == 0){
    cout << "" << endl;
}else{
   cout << s << endl;
}






}
