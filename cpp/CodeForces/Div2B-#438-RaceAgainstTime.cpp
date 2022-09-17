#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
    int h, m, s, t1, t2;
    cin >> h >>  m >> s >>  t1>>  t2;


    string bruh = "YES";
    int hr = t1;
    while(hr!=12){
        cout << "BRUHHH" << endl;
        if(hr==12){
            hr=1;
        }
        for(int y=m ;y<=60; y++){
            for(int z=s; z<=60; z++){
            if(y == m || z == s || hr == h)    {
               bruh = "NO";
                break;
            }
      }
    }
    hr++;
  }
  cout << bruh << endl;












}


