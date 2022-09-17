#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
using namespace std;

int main(){

  long long a, b;
  cin >> a >> b;

  long long max = std::max(a,b);
  long long min = std::min(a, b);
  long long product =1;


    if(max-min>=10){
        product = 0;
    }else{


  for(long long x=max; x>min; x--){
    product*=(x%10);
  }
}
  cout << product%10 << endl;

}
