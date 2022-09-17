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


long long nextPerfectSquare(long long N)
{
    long long nextN = floor(sqrt(N)) + 1;

    return nextN * nextN;
}

bool isPerfectSquare(long double x)
{
  long double sr = sqrt(x);

  return ((sr - floor(sr)) == 0);
}


int main(){
    long long n; cin >> n;
    long long min = 0;

    bool bruh = false;

    cout << isPerfectSquare(n) << endl;


    long long nig = sqrt(n);

    while(bruh == false){
            cout << n << endl;
        if(isPerfectSquare(n) == true){
            cout <<"bye"<< endl;
            n = sqrt(n);
            min++;
           if(n<=10) {
            bruh = true;
            break;
           }else{
            continue;
           }
        }else{
            cout << "hi" << endl;
            n = nextPerfectSquare(n);
            cout << n << endl;
            n = sqrt(n);
            min++;
            if(n<=10){
                bruh = true;
                break;
            }else{
                continue;
            }
        }
    }

    cout << n <<  " " << min <<  endl;
}
