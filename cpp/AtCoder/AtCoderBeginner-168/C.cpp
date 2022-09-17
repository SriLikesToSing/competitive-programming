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
   double a,b,h,m; cin >> a >> b >> h >> m;

   double minuteAngle=(m*360)/60.0;
   double hourAngle=(h*360)/12.0;
    if(minuteAngle == 0) {
        minuteAngle = 360;
        m = 60;
    }else if(hourAngle == 0){
        hourAngle = 360;
        h = 12;

    }

   double finalAngle = max(hourAngle, minuteAngle)-min(hourAngle, minuteAngle);
   double answer;
   if(minuteAngle> hourAngle){
       answer = m*sin(finalAngle);
   }else if(minuteAngle<hourAngle){
        answer = h*sin(finalAngle);
   }else{
    answer = 0;
   }

   cout << answer << endl;

}
