#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){
   string s1, s2, s3; cin >> s1 >> s2 >> s3;
   string bruh = s1+s2;

   sort(bruh.begin(), bruh.end());
   sort(s3.begin(), s3.end());


   if(bruh == s3){
    cout << "YES" << endl;
   }else{
    cout << "NO" << endl;
   }

}
