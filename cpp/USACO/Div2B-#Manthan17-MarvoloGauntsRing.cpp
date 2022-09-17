#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

long long N, P, Q, R, a[100000], dp0[100000], dp1[100000], dp2[100000];

int main(){

 cin >> N >> P >> Q >> R;
 for(int i = 0; i < N ;i++){
    cin >> a[i];
 }

 dp0[0] = a[0] * P;
 for(int x=1; x<N; x++){
    dp0[x] = max(dp0[x-1], a[x] *P);
 }


 dp1[0] = dp0[0] + a[0] * Q;
 for(int x=1; x<N ; x++) {
    dp1[x] = max(dp1[x-1], dp0[x] + a[x] * Q);
 }

 dp2[0] = dp1[0] + a[0]  * R;
 for(int x=1; x<N ; x++){
    dp2[x] = max(dp2[x-1], dp1[x] + a[x] * R);
 }

 cout << dp2[N-1] << endl;








}
