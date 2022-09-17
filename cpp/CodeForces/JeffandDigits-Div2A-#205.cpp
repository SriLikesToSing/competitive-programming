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
   int n; cin >> n;
   int f = 0;
   int  z = 0;

   for(int x=0; x<n; x++){
    int num; cin >> num;

    if(num == 0)
        z++;
    else if(num==5)
        f++;
   }

   if(z==0){
    cout << -1 << endl;
   }else if(f<9){
    cout << 0 << endl;
   }else{
    f -= f%9;
    for(int x=0; x<f; x++){
        cout << 5;
    }
    for(int x=0; x<z; x++){
        cout << 0;
    }
   }















}
