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
    long long  n; cin>>n;
    long long count = 0;


    for(long long x=5; x<=n;x*=5){
        count+=(n/x);
    }
    cout << count << endl;




}

