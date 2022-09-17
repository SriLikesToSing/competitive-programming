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
    int n, m; cin >> n >> m;
    char arr[n][m];

    for(int x=0; x<n; x++){
        for(int y=0; y<m; y++){
            cin >> arr[x][y];
            if(arr[x][y] == '.'){
                if((x+y)%2 == 0){
                    arr[x][y] = 'B';
                }else{
                    arr[x][y] = 'W';
                }
            }
        }
    }


    for(int x=0; x<n; x++){
        for(int y=0; y<m; y++){
            cout << arr[x][y] << "" ;
        }
        cout << endl;
    }



}
