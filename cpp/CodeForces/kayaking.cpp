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
    std::vector<int> arr;
    std::vector<int> dumb;

    for(int x=0; x<2*n; x++){
        int num; cin >> num;
        arr.push_back(num);
    }




    for(int x=0; x<n-1; x++){
        int min = INT_MAX;
        int index1, index2 = 0;
        for(int y=0; y<arr.size(); y++){
            for(int z=0; z<arr.size(); z++){
                if(y==z){
                    continue;
                }
                if(abs(arr[y]-arr[z]) <= min){
                    index1 = y;
                    index2 = z;
                    min = abs(arr[y]-arr[z]);
            //      cout << arr[y] << " " << arr[z] << endl;
                }
            }
        }
            arr.erase(arr.begin() + index1);
            arr.erase(arr.begin() + index2);
            dumb.push_back(min);
        }

//  int bruh = sizeof(arr)/sizeof(arr[0]);
//    sort(arr, arr+bruh);

    int sum = 0;
    for(int x=0; x<dumb.size(); x++){
        cout << dumb[x] << endl;
        sum+=dumb[x];
    }
    cout << sum << endl;
}
