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
    int n; cin >> n;
    int n; cin>> n;



    vector<int> bruh;
    vector<int> bruh;

    for(int x=0; x<n; x++){
        int num; cin >> num;
        bruh[x] = num;
    }

    for(int x=bruh.size()-1; x>=1;x--){
        if(bruh[x]==bruh[x-1]){
           bruh.erase(bruh.end()-x);
        }
    }
    int count = 0;
    for(int x=0; x<bruh.size(); x++){
        count++;
    }

    cout << count << endl;




}
