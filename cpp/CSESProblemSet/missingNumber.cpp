#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;

int main(){
    long long n; cin >> n;
    long long sum = 0;
    long long actualSum = 0;
    for(int x=0; x<n-1; x++){
        long long num; cin >> num;
            sum+= num;
      }


    for(int x=1; x<=n; x++) {
         actualSum+=x;
    }

    cout <<actualSum-sum << endl;



}
