#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
     int k;
     cin >> k;
     long long sum = 0;

    for(int x=1; x<=k; x++) {
        for(int y=1; y<=k; y++){
            for(int z=1; z<=k; z++){
                sum+= std::__gcd(std::__gcd(x, y), z);
       }
    }
}







     cout << sum << endl;




}
