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

    for(int x=0; x<1000; x++){
        for(int y=0; y<1000; y++){
            for(int z=0; z<1000; z++){
                if((x*x) + (y*y) == (z*z)){
                    if(x+y+z==1000){
                        cout << x*y*z<< endl;
                        break;
                    }
                }
            }
        }
    }








}
