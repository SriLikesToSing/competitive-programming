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

const int l = 200005;

int main(){
   int n; cin >> n;
   map<string, vector<int>> maps;
   vector<string> arr;
   vector<int> nums;
   vector<string> results;


   for(int x=0; x<n; x++){
        string s; cin >> s;
        arr.push_back(s);
        map[s].push_back(x);
   }

   for(int x=0; x<n; x++){
        nums.push_back(maps[s].size()-1);

   }

   //sort the vector

   for(int x=0; x<n; x++){

   }


   for(int x=0; x<nums.size(); x++){
        cout << arr[nums[x]] << endl;
   }

}
