#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
   int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   int t1 = (k * l)/nl;
   int t2 = c* d;
   int t3 = p / np;

   cout << std::min(std::min(t1, t2), t3)/n << endl;






}
