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
   int n, m; cin>> n >> m;
    bool bruh = false;
    int a = 0;
    int b = 0;
    int num = 1;
    int count = 0;
   while(num<=min(n,m)){
    int result = n- (num*num);
    if(m == result*result + num){
        a = num;
        b = result;
        count++;
    }
        num++;


   }

   cout << count << endl;
}
