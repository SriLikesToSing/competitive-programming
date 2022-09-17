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

bool isTrue(long long a1, long long a2, long long b1, long long b2){
    if(a1*a2+b1*b2 == 0){
        return false;
    }else{
        return true;
    }
}

int main(){
   int n; cin >> n;
   vector<long long> a;
   vector<long long> b;
   long long count = 0;

   for(int x=0; x<n; x++){
    int z, d; cin >> z >> d;
    a.push_back(z);
    b.push_back(d);
   }

   long long NO = 0;
   for(int x=0; x<n; x++){
    for(int y=0; y<n; y++){
        if(y == x){
            continue;
        }
        if(isTrue(a[x], a[y], b[x], b[y]) == false){
            continue;
        }
        count++;
     }
   }
   cout << count<< endl;




}
