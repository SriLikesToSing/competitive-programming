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
    int n, k; cin >> n >> k;
    vector<int> arr;
   for(int x=0; x<n; x++){
    int num; cin >> num;
    arr.push_back(num);
   }
   int count = 0;
   bool bruh = false;
   while(bruh == false){
    if(arr.size() == 1){
        if(k >= arr[0]){
            count++;
            break;
        }else{
            bruh = false;
            break;
        }
    }
    if(arr[0] > k &&  arr[arr.size()-1] > k){
        bruh = false;
        break;
    }else if(arr[0] <= k){
        count++;
        arr.erase(arr.begin());
    }else if(arr[arr.size()-1] <= k){
        count++;
        arr.erase(arr.begin()+arr.size()-1);
    }
   }
   cout << count << endl;





}
