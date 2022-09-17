#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int solve(int n){
    bool bruh = false;

    while(true){
        n+=1;
        int a= n/1000;
        int b = n/100 % 10;
        int c = n/10 % 10;
        int d = n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }



   return n;
}

int main(){
   int y; cin>> y;

   int n = solve(y);




   cout << n<< endl;
}
