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
vector<string> arr;
vector<string> everse;

int main(){
   int n; cin >> n;
   string space = " ";
   arr.push_back("0");

   for(int x=1; x<=n; x++) {
    string s = "";
    for(int y=0; y<=x; y++)  {
        if( y== 0){
            s+= "" + std::to_string(y);
        }else{
        s+= " " + std::to_string(y);
        }
    }

    for(int z=x-1; z>=0; z--){
        s+= " " + std::to_string(z);
    }
        arr.push_back(s);
   }

    for(int x=n-1; x>=0;  x--) {
        arr.push_back(arr[x]);
    }


  int index = n;
  int count = 0;
  for(int x=0; x<arr.size(); x++){
  for(int x=0; x<index; x++){
    cout << "  ";
  }
    cout<< arr[x] << endl;
    index--;
    if(index == -1){
        index = n-2;
        continue;
    }
   }
 }


