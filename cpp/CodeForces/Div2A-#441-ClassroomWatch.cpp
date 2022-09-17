#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
  int n;
  cin >> n;

  vector<int>nums;
  int ways = 0;


  for(int x=n-81 ;x<=n;x++){
    int sum =0;
    int Num = x;
    while(Num!=0){
      sum+=Num%10;
      Num/=10;
    }
    sum+=x;
    if(sum==n){
    nums.push_back(x);
    ways++;
    }

  }

  cout << ways << endl;
  for(int y=0;y<nums.size();y++){
    if(ways ==0){
      cout << 0 << endl;
      break;
    }
    cout << nums.at(y) << endl;
  }
}
