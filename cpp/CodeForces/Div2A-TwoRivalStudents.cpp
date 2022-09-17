#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

   for(int bruh=0; bruh<t;bruh++) {
    int n,x, a, b;
    cin >> n >> x >> a >> b;
   int min =  std::min(a, b);
   int max = std::max(a,b);
   int count = 0;
    while(count < x  &&  max>=0 && max<=n &&  min>=0 && min<=n) {
        if((max+1)-min > max-(min) && max+1 <= n){
            max++;
        }else if((max)-min < max-(min-1) && min-1 > 0){
            min--;
        }
        count++;
      }
    int final_dist = abs(max-min);
     cout << final_dist << endl;

    }
 }

