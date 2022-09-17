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
    int n; cin >> n;
    int count[n-1] = {0};
    for(int x=0; x<n-1; x++){
        int num; cin >> num;
        count[num-1]++;
    }
    for(int x=0; x<n-1; x++){
        cout << count[x] << endl;
    }
    cout << "0" << endl;




}
