#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;



int main(){
    int t;
    cin >> t;


    for(int x=0; x<t; x++){
        int r,g,b;
        cin >> r >> g >> b;
        int arr[3] = {r, g, b};
        if(r == g && r == b && g == b){
            cout << "Yes" << endl;
            continue;
        }
        int temp = std::max(arr[0], arr[1]);
        int max = std:: max(temp, arr[2]);
        int sum =0;
        for(int y=0; y<3; y++){
            if(arr[y] != max){
              sum+= arr[y];
            }
        }
        cout << sum << endl;
        if(sum %  max == 0){
            cout << "Yes" << endl;

        }else{
            cout << "No" << endl;
        }







    }
}
