#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;


    for(int x=0; x<n; x++ ) {
        for(int y=x; y<n; y++){
            for(int z=y; z<n; z++){
                    if(s[x] == 'R' && s[y] == 'G' && s[z] =='B' )
                    if((x!=y && y!=z && x!=z) && (y-x) != (z-y) ){
                        count++;
          }
       }
    }
}


    cout << count << endl;

}
