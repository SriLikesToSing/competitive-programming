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

long long fib(long long sum, long long evenSum, long long prevFirst){
    if(evenSum >= 4000000){
        return evenSum;
    }
    if((prevFirst+sum)%2 == 0){
        fib(sum+prevFirst, evenSum+prevFirst+sum, sum);
    }else{
        fib(sum+prevFirst, evenSum, sum);
    }
}

int main(){
    long long sum = fib(1, 0, 1);

    cout << sum << endl;
}
