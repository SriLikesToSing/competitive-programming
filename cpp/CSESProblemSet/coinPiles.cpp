#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
#include <functional>
using namespace std;

int main(){

    long long t; cin >> t;

    for(long long x=0; x<t; x++){
        long long a, b; cin >> a >> b;
        if((a%2 == 0 && b-(a/2) == 0) || a-(b/2) == 1 && b%2 == 2 || a%2 == 2 && b-(a/2) == 1 || b%2 == 0 && a-(b/2) == 0){

            cout << "YES" << endl;
        }else{
            cout << b-(a/2) << endl;
            cout << "NO" << endl;
        }
    }
}
