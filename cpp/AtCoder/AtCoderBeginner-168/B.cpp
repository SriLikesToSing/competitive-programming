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
   int k; cin >> k;
   string s; cin >> s;

   if(s.length()>k){
        string bruh = s.substr(0, k) + "...";
        cout << bruh << endl;
   }else{
    cout << s << endl;
   }




}
