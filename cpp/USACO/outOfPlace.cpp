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
#include <utility>
#include <iterator>
using namespace std;
using vi = vector<int>;
#define pb push_back
using ll = long long;

int main(){
    int n; cin >> n;
    int arr[n];
    int temp[n];
    int count = 0;
    for(int x=0; x<n; x++){
        int num; cin >> num;
        arr[x]=num;
        temp[x]=num;
    }
    int bruh = sizeof(temp)/sizeof(temp[0]);
    sort(temp, temp+bruh);


    for(int x=0; x<n; x++){
        if(arr[x] != temp[x]){
            cout << arr[x] << " "<< temp[x] << endl;
            count++;
        }
    }
    cout << count-1 << endl;
}
