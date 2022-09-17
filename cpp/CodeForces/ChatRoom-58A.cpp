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
   string s; cin >> s;
   char arr[5] = {'h', 'e', 'l', 'l', 'o'};
   vector<char> result;
   for(int x=0; x<s.size(); x++){
       result.push_back(s[x]) ;
   }

   int index = 0;
   int count = 0;
   for(int x=0; x<result.size(); x++){
    if(result[x] == arr[index]){
        count++;
        index++;
    }
  }

   if(count == 5){
    cout << "YES" << endl;
   }else{
    cout <<"NO"  << endl;
   }


}
