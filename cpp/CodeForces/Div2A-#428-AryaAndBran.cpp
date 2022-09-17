#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
    int n, k;
    int days = 0;
    int given = 0;
    cin >> n >> k;
    int storage = 0;

    for(int x=1;x<=n;x++){
        int ai;
        cin >> ai;
        if(ai>=8){
            given+=8;
            storage+=(ai-8);
        }else if(ai<8){
            if(storage >=8){
                given+=(8-ai);
                storage-=(8-ai);
                if(storage <0){
                    storage =0;
                }
            }else if(storage<8){
                given+=(ai-storage);
                storage-=(ai-storage);
                if(storage <0){
                    storage =0;
                }


            }

        }
        if(given>=k){
            days = x;
            break;
        }
    }
    if(given<k){
        days = -1;
    }
    cout << days << endl;




}

