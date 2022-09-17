/*
ID: 286002
PROG: cownomics
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


bool compare(vector<char> arr1, vector<char> arr2){
    bool distinctVal = true;
    for(int x=0; x<arr1.size(); x++){
        if(distinctVal == false){
            break;
        }
         for(int y=0; y<arr2.size(); y++) {
            if(arr1[x] == arr2[y]){
                distinctVal = false;
                break;
            }
         }
    }
    return distinctVal;
}

int main(){
    ifstream fin("cownomics.in");
    ofstream fout("cownomics.out");
    int n, m; fin >> n >> m;
    int count = 0;
    n*=2;
    char arr[n][m];

    for(int x=0; x<n;x++){
        for(int y=0; y<m; y++){
            char num; fin >> num;
            arr[x][y] = num;
        }
    }

    for(int x=0; x<m; x++){
        vector<char> spottyPos;
        vector<char> plainPos;
        for(int y=0; y<n/2; y++){
            spottyPos.push_back(arr[y][x]);
        }

        for(int z=n/2; z<n; z++){
            plainPos.push_back(arr[z][x]);
        }
/*
        for(int test=0; test<spottyPos.size(); test++){
            cout << spottyPos[test] << " ";
        }
        cout << endl;
*/

        if(compare(spottyPos, plainPos)){
            count++;
        }
    }

    fout << count << endl;
}
