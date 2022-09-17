#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;
int main(){


    long long  x;
    cin >> x;

    bool bruh = true;
    int points = 0;
    while(bruh == true){
        if(x/500 != 0){
            x-= (500 * (x/500));
            points+= (500 * (x/500) ) *2 ;
        }else if(x/100 != 0){
            x-= (100 *( x/100));
            points+=(100 * (x/100)) *2;
        }else if(x/50 !=0){
            x-=(50 * (x/50));
            points+=(50 * (x/50)) * 2;
        }else if(x/5 != 0){
            x-=(5 *(x/5));
            points+= (5 * (x/5)) * 2;

        }else if(x/1 != 0){
            x-=(1 * (x));
            points+=(1 * (x)) * 2;
        }else{
            bruh = false;
        }
    }
    cout << points << endl;
}





