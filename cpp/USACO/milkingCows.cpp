/*
ID: 286002
PROG: milk2
LANG: C++
*/


#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
using namespace std;


int main(){
    ifstream fin("milk2.in");
    ofstream fout("milk2.out");
    long long n; fin >> n;
    long long start[n] ;
    long long end[n];
    long long longestMilk= INT_MIN;
    long long longestNoMilk = INT_MIN;
    long long onlyOne = false;

    for(int x=0; x<n; x++){
        long long num, num1; fin >> num >> num1;
        start[x] = num;
        end[x]= num1;
    }
    if(n == 1) {
        onlyOne = true;
    }

    //sort array
    for(long long x=1; x<n; x++){
        for(int y=1; y<n; y++){
            if(start[y] <= start[y-1]){
                //switch
                long long temp = start[y-1];
                start[y-1] = start[y];
                start[y] = temp;
                //switch idle times as well;
                long long temp1 = end[y-1];
                end[y-1] = end[y];
                end[y] = temp1;
            }
        }
    }


    long long tempLong = 0;
    long long tempIdle = 0;
    long long x1 = end[0];
    long long x2 = start[0];
    for(long long x=1; x<n; x++){
        if(x1 >= start[x]){
            x1 = max(end[x], x1);
            tempLong=(x1-x2);
            if(x == n-1){
                longestNoMilk=max(longestNoMilk, tempIdle);
                longestMilk=max(longestMilk, tempLong);
            }

        }else if(x1<start[x]){
            longestMilk = std::max(tempLong, longestMilk);
            tempLong = 0;
            x2 = start[x];
            longestMilk = std::max(end[x]-x2, longestMilk);

            tempIdle = start[x]-x1;
            x1 = end[x];
            longestNoMilk = max(tempIdle, longestNoMilk);

        }
    }

        if(onlyOne == true){
            longestMilk = start[0];
            longestNoMilk = 0;
        }

   fout << longestMilk << " "  << longestNoMilk << endl;
}
