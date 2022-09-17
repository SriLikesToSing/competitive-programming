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
vector<bool> visited;

int dfs(string s, bool dir, string masterString){
    if(s == masterString){
        return 1;
    }else if(s.length() > masterString.length()){
        return 0;
    }



    for(int x=1; x<s.length(); x++){



    }







}

int main(){
   string s; cin >> s;
   int ways =0;


   for(int x=1; x<s.length()-1; x++){
    //wrong but try to find all possiblities
    ways+=dfs(substring((0, x),true,s);
    ways+=dfs((0, x),false,s));
    for(int y=x; y>=0; y--){
        ways+=dfs(substring(x, 0), true, s);
        ways+=dfs(substring(x, 0), false, s);
    }
   }







  cout << ways << endl;
}
