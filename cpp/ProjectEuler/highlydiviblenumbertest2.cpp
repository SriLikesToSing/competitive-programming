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

long long dp[10000000] = {0};
//map<long long, long long> divisors;

long long isSatisfied(long long num){
    long long count = 0;
    for(int x=1; x<=num; x++){
        if(num%x==0){
            count++;
        }
    }

    return count;

}
//1000000000 = 100
int main(){
 cout << isSatisfied(10000000)<< endl;


}
