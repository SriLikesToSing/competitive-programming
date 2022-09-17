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

bool isPrime(long long num){
    long long count = 2;
    bool bruh = true;
    while(count<num){
        if(num%count == 0){
            bruh = false;
            break;
        }
        count++;
    }
    return bruh;

}

int main(){
    long long num = 6;
    long long count = 13;
    while(num <= 10001)  {
        cout << num << endl;
       if(isPrime(count) == true && num == 10001){
            cout << count << endl;
            break;
       }else if(isPrime(count) == true && num < 10001 ){
            num++;
       }else if(!isPrime(count)){
        count+=2;
        continue;
       }
       count+=2;
    }





}
