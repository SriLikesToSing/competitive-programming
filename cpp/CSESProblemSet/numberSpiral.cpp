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
    long long t; cin >> t;

    for(int bruh=0; bruh<t; bruh++) {
       long long x, y; cin >> x>> y;
       long long num = max(x, y)*max(x, y);
       // 1, 5  '''''
       // 5, 1 (given cords)

       if(max(x,y)%2==0) {
            long long yCord = abs(1-y);
            long long xCord = abs(sqrt(num)-x);
            num-=(xCord+yCord);
       }else{
            long long yCord =abs(sqrt(num)-y);
            long long xCord = abs(1-x);
            num-=(xCord+yCord);
       }
       if(num == 1){
        cout << 1 << endl;
       }else{
        cout << num << endl;
        }

    }


}
