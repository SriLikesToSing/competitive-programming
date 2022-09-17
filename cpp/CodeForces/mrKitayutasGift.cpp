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
bool isPalindromic(string s){
    vector<char> forward;
    vector<char> backward;
    bool bruh = false;
    for(int x=0; x<s.length(); x++){
        forward.push_back(s[x]);
    }

    for(int x=s.length()-1; x>=0; x--){
        backward.push_back(s[x]);
    }

    if(forward ==  backward){
        bruh = true;
    }
    return bruh;
}


int main(){
   string s; cin >> s;
   bool bruh = false;
   vector<char> bruh;


   for(int x=0; x<s.length(); x++){
        bruh.push_back(s[x]);
   }


   for(int x=0; x<n; x++){

   }





  if(bruh == false){
    cout << "NA" << endl;
  }else{
  for(int x=0; x<n; x++) {
    cout << bruh[x];
  }
}







}
