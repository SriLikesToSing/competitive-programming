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
   int x, y;
   for(int x=0; x<n; x++){
    cout << "hi" << endl;
   }

   int maxWord = INT_MIN;
   int count = 0;
   bool par = false;

   for(int x=0; x<n; x++){
    if(s[x] == '('){
        maxWord = max(count, maxWord);
        par = true;
        continue;
    }else if(s[x] == ')'){
        par = false;
    }
    if(par == true){
        continue;
    }

    if(s[x] == '_'){
        maxWord = max(count, maxWord);
        count = 0;
    }else if(s[x] == ')'){
        par= false;
        count = 0;
        continue;
    }else{
        count++;
    }
   }

   maxWord = max(count, maxWord);
   if(maxWord == INT_MIN){
    x = 0;
   }else{
      x = maxWord;
   }
   count = 0;
   maxWord = 0;
   bool bruh = false;
   string damn [10000];
   int index = 0;

   for(int x=0; x<n; x++){
        if(s[x] == '('){
            bruh = true;
        }else if(s[x] == ')'){
            bruh = false;
            index++;
            damn[index] = " ";
        }else if(bruh == true){
            if(s[x] == '_'){
                index++;
                damn[index] = s[x];
            }else{
                damn[index]+=s[x];
            }
        }
   }

   for(int x=0; x<index; x++){
    if(damn[x] != "_" &&  damn[x] != " " && damn[x] != ""){
        count++;
    }
   }



   cout << x<< " " << count <<  endl;


}
