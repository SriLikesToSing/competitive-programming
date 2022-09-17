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
    long long n, t; cin >> n >> t;
    long long bruh = -1;
   for(long long x = pow(10, n-1)+1; x<pow(10, n); x++){
    cout << fixed <<x << endl;
       if(x%t == 0){
        bruh = x;
        break;
       }
   }

   cout << bruh << endl;
}
