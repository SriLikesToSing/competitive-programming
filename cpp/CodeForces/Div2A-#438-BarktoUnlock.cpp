#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;




int main(){
    string s;
    int n;
    cin >> s >> n;
    string arr[n];



    for(int x =0; x<n; x++)    {
        string bruh;
        cin >> bruh;
        arr[x] = bruh;
    }
    bool bruh = false;
    for(int y=0;y<n; y++){
        for(int z=0; z<n; z++){
            string temp = arr[y] + arr[z];
            //cout << temp << endl;
            for(int w=1; w<4;w++){
                if(temp[w] == s[1] && temp[w-1] == s[0]){
                    bruh = true;
                }
            }
        }
    }
    if(bruh == true){
        cout << "YES" << endl;

    }else{
        cout << "NO" << endl;
    }
}
