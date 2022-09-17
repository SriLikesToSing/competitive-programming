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

    long long sumSquares = 0;
    long long squaredSum = 0;

    long long bruh = 1;

    while(bruh<=100){
        sumSquares+=(bruh*bruh);
        bruh++;
    }

    bruh = 0;

    while(bruh<=100){
        squaredSum+=bruh;
        bruh++;
    }


        cout << (squaredSum*squaredSum)-sumSquares << endl;


}
