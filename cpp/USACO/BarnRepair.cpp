/*
ID: 286002
PROG: barn1
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
    ifstream fin("barn1.in");
    ofstream fout("barn1.out");
    int m, s, c; fin >> m >> s >> c;
    vector<int> arr;
    for(int x=0; x<c; x++){int n; fin>> n; arr.push_back(n);
    sort(arr.begin(), arr.end());
    vector<int> lens;
    vector<int> finalDistance;

    int count = (arr[0]) + (s-(arr[c-1]+1));
    cout << count << endl;
    for(int x=1; x<c; x++){
        lens.push_back((arr[x]-1)-(arr[x-1]));
    }
    sort(lens.begin(), lens.end(), greater<int>());
    if(m > c){
        m = c;
    }
    for(int x=0; x<m-1; x++){
        finalDistance.push_back(lens[x]);
        count+=lens[x];
        cout << lens[x] << endl;
    }

   fout << s-count << endl;
}
