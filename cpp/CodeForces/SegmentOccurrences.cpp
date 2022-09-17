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

const int N = 1000+2;

int main(){
   int n, m, q; cin >> n >> m >> q;
   string s, t; cin >> s>> t;

   int ok[N];
   int pr[N];
   char buff[N];

   pr[0] = 0;
   for(int x=0; x<n-m+1; x++){
       bool found = true;
        for(int y=0; y<m; y++){
            if(s[x+y] != t[y]){
                found = false;
                break;
            }
        }
        ok[x] = found;
        pr[x+1] = pr[x] + ok[x];
   }

   for(int x=0; x<q; x++){
       int l, r; cin >> l >> r;
       if(r-l+1<m){
           cout << 0 << endl;
           continue;
       }
       r = r-m+1;
       l--;
       cout << pr[r]-pr[l] << endl;
   }
}
