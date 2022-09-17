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
        cout << n << " ";
    while(n>1) {
        if(n==1){
            cout << n << endl;
            break;
        }
        if(n%2==0){
           n/=2;
           cout << n << " ";
        }else{
            n= (n*3)+1;
            cout << n << " ";
        }
    }


}
