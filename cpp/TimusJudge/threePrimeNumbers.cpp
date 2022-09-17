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

/*
isPrime(long long num){
    for(int x=2; x<num; x++){
       if(num%x == 0 ) {
        return false;
       }
    }

        return true;
}
*/
int main(){
   long long n; cin >> n;
   cout << (long long)(143*(n-2)-(81*((n-2)-1)))-1 << endl;


/*
   for(int x=100; x<999; x++){
    if(isPrime(x)){
        numbers.push_back(x);
   }
}
   int count = 0;
   for(int x=0; x<numbers.size(); x++){
    cout << numbers[x] << endl;
   }
*/
//   cout << count << endl;
}
