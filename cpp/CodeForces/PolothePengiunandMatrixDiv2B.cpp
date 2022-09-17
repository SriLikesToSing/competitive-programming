
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
  long long n, m, d; cin >> n >> m >> d;
  vector<long long> arr;
  vector<long long> values;
  int yes = 0;


//  cout << "bruh" << endl;
//  cout << n << " " << m << endl;

  for(int x=0; x<n; x++){
    for(int y=0; y<m; y++){
      long long num; cin >> num;
 //      cout << "num" << endl;
  //      cout << num << endl;

      arr.push_back(num);
      values.push_back(num % d);
    }
  }
  //sort arraylist
  sort(arr.begin(), arr.end());
  sort(values.begin(), values.end());
  for(int x=1; x<values.size(); x++){
        if(values[x] != values[x-1]){
            yes = -1;
            break;
        }
  }

  int minOperations = INT_MAX;
  for(int x=arr[0]; x<=arr[arr.size()-1]; x+=d){
    long long temp = 0;
    for(int y=0; y<arr.size(); y++){
      if(x==arr[y]){
        continue;
      }
      long long ans = ((std::max(x, (int)arr[y])) - (std::min(x, (int)arr[y]))) / d;
      temp+=ans;
    }



    minOperations = min(minOperations,(int)temp);
  }
  if(yes == -1){
    cout << -1 << endl;
  }else{
  cout << minOperations << endl;
  }
}
