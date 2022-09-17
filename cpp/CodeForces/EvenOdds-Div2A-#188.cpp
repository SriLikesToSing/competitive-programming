#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
using namespace std;


int main(){
long long n,k; cin >> n >> k;
long long odd = 0;
long long even = 0;
long long mid = 0;
long long result = 0;
if(n%2==0){
    odd = n-1;
    even = n;
    mid = n/2;
}else{
    odd = n;
    even = n-1;
    mid = (n/2)+1;
}

if(k<=mid){
   result =   2 * k - 1;
}else {
    result = (2 * (k-mid));
}

cout << result << endl;

}
