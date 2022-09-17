#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    int n;
    cin >> n;
    int dp[n][3];
    int minValue = INT_MAX;
    int minDays = 0;

    for(int x=0; x<n; x++){
        for(int y=0; y<n; y++){
            dp[x][y] = INT_MAX;
        }
    }
    int moment; cin >> moment;
        if(moment== 0){
            dp[0][0] = INT_MAX;
            dp[0][1] = INT_MAX;
            dp[0][2] = 1;
        }else if(moment== 1){
            dp[0][0] = INT_MAX;
            dp[0][1] = 0;
            dp[0][2] = 1;
        }else if(moment== 2){
            dp[0][0] = 0;
            dp[0][1] = INT_MAX;
            dp[0][2] = 1;
        }else if(moment==3){
            dp[0][0] = 0;
            dp[0][2] = 1;
            dp[0][1] = 0;
        }
        if(n == 1){
            int minTemp = std::min(dp[0][0], dp[0][1]);
            minDays = std::min(dp[0][2], minTemp);
        }


 //       cout << dp[0][0] << " " << dp[0][1] << endl;

    for(int x=1; x<n; x++){
        int num; cin >> num;
        int temp = std::min(dp[x-1][0], dp[x-1][1]);
        minValue = std::min(dp[x-1][2], temp);

        //take min of previous values
        dp[x][0] = minValue;
        dp[x][1] = minValue;
        dp[x][2] = minValue + 1;
//        cout << "dp2" << endl;
//        cout << dp[x][2] << endl;

//take in new number
        if(num == 0){
            dp[x][0] = INT_MAX;
            dp[x][1] = INT_MAX;
        }else if(num == 1){
            dp[x][0] = INT_MAX;
        }else if(num == 2){
            dp[x][1] = INT_MAX;
        }

        //chec if you already competed the day before
        if(dp[x-1][0] == minValue){
            dp[x][0] = INT_MAX;
        }
        if(dp[x-1][1] == minValue){
            dp[x][1] = INT_MAX;
        }



        if(x == (n-1)){
            //find min to find total amount of days
        int temp = std::min(dp[x][0], dp[x][1]);
        minValue = std::min(dp[x][2], temp);
        minDays = minValue;

    }


}


    cout << minDays << endl;

}
