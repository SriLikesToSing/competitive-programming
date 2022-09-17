#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;
int factorial(int x){
    if(x ==1){
        return 1;
    }
    return x*factorial(x-1);
}

int main(){
int n;
int m;
cin >> n >> m;
int sumEven = (factorial(n))/(factorial(2)*factorial(n-2));
int sumOdd = factorial(m)/(factorial(2)*factorial(n-2));
cout << n << endl;






}
