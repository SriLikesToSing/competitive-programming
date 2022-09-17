#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){

   int n;
   cin >> n;
   string word;

   if(n >=1 && n<=4){
    word = "few";
   }else if(n>=5 && n<=9){
    word = "several";
   }else if(n>=10 && n<=19){
    word = "pack";
   }else if(n>=20 && n<= 49){
    word = "lots";
   }else if(n>=50 && n<=99){
    word = "horde";
   }else if(n>=100 && n<=249 ){
    word = "throng";
   }else if(n>=250&& n<=499){
    word = "swarm";
   }else if(n>=500 && n<=999){
    word = "zounds";
   }else if(n>=1000){
    word = "legion";
   }
   cout << word << endl;


}
