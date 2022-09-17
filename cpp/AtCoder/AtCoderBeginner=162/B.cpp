#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;



int main(){
    long long n; cin >> n;
    long long sum = 0;

    for(long long x = 1; x<=n; x++){
        if(x%3==0 && x%5==0){
           continue;
        }else if(x%3== 0 && x%5!=0 ){
            continue;
        }else if(x%3!=0 && x%5==0){
            continue;
        }else{
            sum+=x;
        }
    }

    cout << sum << endl;

}
