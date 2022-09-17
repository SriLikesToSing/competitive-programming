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

long long check(int x, int y, arr[]){
    long long ways = 0;


    return ways;
}

long long check(int x, int y, arr[]){
    long long ways = 0;




    return ways;
}

int main(){
   long long n; cin >> n;
   long long arr[n];
   long long count = 0;
   for(int x=0; x<n; x++) {
    long long num; cin >> num;
     arr[x] = num;
   }


   for(int x=0; x<n; x++){
    for(int y=0; y<n; y++){
       count+=check(x, y, arr);

    }
   }




   cout << count << endl;

}
