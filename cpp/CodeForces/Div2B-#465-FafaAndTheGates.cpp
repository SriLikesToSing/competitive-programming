#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
   int n;
   string S;

   cin >> n >> S;
   int Movex = 0;
   int Movey =0;
   int amt = -1;
   bool prev;
   bool now;
   for(int x=0; x<n;x++){
     if(S[x] == 'U'){
        Movey++;
     }

     if(S[x] == 'R'){
        Movex++;
}

     if(Movex>Movey && prev == false){
        amt++;
        now = true;
     }
     if(Movex<Movey && prev == true){
        amt++;
        now = false;
     }
     prev = now;


   }
   cout << amt << endl;

    }

