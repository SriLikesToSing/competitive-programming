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
   int MOD = 1000000007;
   long long int a, b, t;
   cin >> a >> b >> t;
   long long int s[] = {a, b, b-a, -a, -b, a-b};
   cout << (s[(t-1)%6] % MOD + MOD ) % MOD;




}
