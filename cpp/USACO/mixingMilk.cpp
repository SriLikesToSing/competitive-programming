/*
ID: 286002
PROG: milk
LANG: C++11
*/

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
    ifstream fin("milk.in");
    ofstream fout("milk.out");
    long long n, m; fin >> n >> m;
    vector<long long> price;
    vector<long long> amt;
    long long amount = 0;
    long long cost = 0;

    for(int x=0; x<m; x++){
        int c, a; fin >> c >> a;
        price.push_back(c);
        amt.push_back(a);
    }

    //sort the array
    for(int x=0; x<m; x++){
        for(int y=1; y<m; y++){
            if(price[y] < price[y-1]){
                long long temp = price[y-1];
                price[y-1] = price[y];
                price[y] = temp;

                long long temp1 = amt[y-1];
                amt[y-1] = amt[y];
                amt[y] = temp1;
            }else if(price[y] == price[y-1]){
                if(amt[y] > amt[y-1]){
                    long long temp1 = amt[y-1];
                    amt[y-1] = amt[y];
                    amt[y] = temp1;
                }
            }
        }
    }

    for(int x=0; x<m; x++){
        cout << amount << endl;
//        cout << "price" << " "  << "amt" << endl;
 //      cout << price[x] << " " << amt[x] << endl;
        if(amount == n){
            break;
        }

        if(amount+amt[x]>n){
            cout << "amount" << endl;
            cout << amount << endl;
//            cout << amount+amt[x]-n << endl;
            long long temp = n-amount;
            if(temp > amt[x]){
                continue;
            }else{
                amount+=(temp);
                cost+=(price[x] * (temp));
            }
        }else if(amount+amt[x]<n){
            cost+=(price[x]*(amt[x]));
            amount+=amt[x];
        }else if(amount+amt[x] == n){
            amount+=amt[x];
            cost+=(price[x]*amt[x]);
            break;
        }
    }
   fout << cost<< endl;

}
