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
   int n, a,b; cin >> n >> a >> b;
    int count = 0;

   for(int x=1; x<=n; x++) {
    if(x-1 <= b && n-(x)>= a){
        count++;
    }
   }

   cout << count << endl;



}
