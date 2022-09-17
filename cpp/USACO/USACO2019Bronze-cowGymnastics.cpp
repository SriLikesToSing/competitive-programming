/*
ID: 286002
PROG: gymnastics
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

int arr[10][20];

bool better(int bruh1, int bruh2, int k, int n){
    bool debug = false;
    int count = 1;
    for(int z=1; z<k; z++){
        for(int x=0; x<n; x++)    {
            for(int y=x+1; y<n; y++){
                if(arr[z][x] == bruh1 && arr[z][y] == bruh2){
                    count++;
                }
            }
        }
    }

    if(count == k){
        return true;
    }else{
        return false;
    }
}

int main(){
    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");
    int k, n; fin >> k >> n;
    vector<int> X;
    vector<int> Y;
    for(int x=0; x<k; x++){
        for(int y=0; y<n; y++){
            int num; fin >> num;
            arr[x][y] = num;
        }
    }

    for(int x=0; x<n; x++){
        for(int y=x+1; y<n; y++){
            if(better(arr[0][x], arr[0][y], k, n)){
                X.push_back(arr[0][x]);
                Y.push_back(arr[0][y]);
            }
        }
    }
    for(int x=0; x<X.size(); x++){
       // cout << Y[x] << " " << X[x] << endl;
        count++;
    }
    fout << count <<endl;
}
