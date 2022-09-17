#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long num = std::abs(n-k);
    /*
    while(num>=0) {
        if(std::abs(num-k)>=num){
            break;
        }
        if(k == 1){
            num = 0;
            break;
        }
        num = std::abs(num-k);
       // cout << num << endl;
    }
    */

    cout << n%k << endl;


}
