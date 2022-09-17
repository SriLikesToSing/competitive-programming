#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
    string p;
    cin >> p;
    string yesOrNo = "NO";
    for(int x=0;x<p.length();x++){

        if(p[x] == 'H' || p[x]  == 'Q' || p[x] == '9' ){
           yesOrNo = "YES";
            break;
        }
        }
        cout << yesOrNo << endl;
    }

