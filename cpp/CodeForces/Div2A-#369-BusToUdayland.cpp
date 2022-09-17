#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    int n;
    cin >> n;
    string bruh = "NO";
    int arr[n];
    for(int x=0; x<n; x++){
        string s;
        cin >> s;
        for(int y=1; y<string::length; y++){
           if(s[y] == "O" && s[y-1] == "O") {
            bruh = "YES";
            s[y] = "+";
            s[y-1] = "+";
           }
           arr[x] = s;
        }

    }
    cout << bruh << endl;
    for(int x=0; x<n; x++){
        cout << arr[x] << endl;
    }



}
