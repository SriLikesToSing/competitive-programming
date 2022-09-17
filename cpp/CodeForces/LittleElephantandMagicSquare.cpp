#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;


int main(){
   long long arr[3][3];

   for(int x=0; x<3; x++){
    for(int y=0; y<3; y++){
      long long num; cin >> num;
       arr[x][y] = num;
    }
   }





   for(long long x=0; x<100000; x++){
    int sum = x + arr[1][0] + arr[1][1];
    if(sum-() == sum&& sum-())
    int x2 =
    bool bruh = false;
    for(long long y=0; y<100000; y++){
        if(x+ arr[0][1] + arr[0][2] == y + arr[2][1] + arr[2][0]){
            long long sum = arr[0][1] + arr[0][2] + x;
            long long mid = sum - (x+y);
        //    cout << arr[1][0] + mid + arr[1][2] << " "  << sum << endl;
            if(arr[1][0] + mid + arr[1][2] == sum){
                arr[1][1] = mid;
                arr[0][0] = x;
                arr[2][2] = y;
                bruh = true;
                break;
            }
        }
    }
    if(bruh == true){
        break;
    }
}

   for(int x=0; x<3; x++){
    for(int y=0; y<3; y++){
        cout << arr[x][y] << " " ;
    }
    cout << endl;
   }

}



