#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
#include <set>
#include <iterator>
using namespace std;

int main(){
   int n; cin >> n;

   int day1[n] ;
   int day2[n];
   int mainSum =0;

   for(int x=0; x<n; x++){
    int num; cin >> num;
    day1[x] = num;
    mainSum+=day1[x];

   }

   for(int x=0; x<n; x++){
    int num; cin >> num;
    day2[x] = num;
   }
   string bruh = "YES";
   int sum = 0;

   for(int x=0; x<n; x++) {
        sum+=day2[x];
   }

   if(sum > mainSum){
    bruh = "NO";
   }


   cout << bruh << endl;

}
