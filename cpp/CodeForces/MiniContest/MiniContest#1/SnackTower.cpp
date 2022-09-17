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
    long long n; cin >> n;
    vector<long long> arr;
    vector<long long > bruh;

    for(long long x=0; x<n; x++){
        long long num; cin >> num;
        arr.push_back(num);
    }

    bool nig= false;
    while(nig== false){
        if(arr[0] == n){
            cout << arr[0] << " ";
//            sort(bruh.begin(), bruh.end(), greater<int>());
          sort(bruh.begin(), bruh.end());
            for(int x=bruh.size()-1; x>=0; x--){
                if(bruh[bruh.size()-1] != n-1){
                    break;
                }
                cout << bruh[x] << " ";
                bruh.erase(bruh.begin() + x);
                n--;
            }
            arr.erase(arr.begin());
            n--;
        }else{
            bruh.push_back(arr[0]);
            arr.erase(arr.begin());
        }
        if(n == 0 || arr.size() == 0){
            nig= true;
            break;
        }
        cout << endl;
    }
}
