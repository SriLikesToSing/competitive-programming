#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
    float n, m;
    float min = 100000.0;
    cin >> n >> m;

    for(int x=0; x<n; x++){
        float a, b;
        cin >> a >> b;
        float price = (a/b) * m;
        if(price <= min){
            min = price;
        }
    }

    cout << (double) min << endl;

}
