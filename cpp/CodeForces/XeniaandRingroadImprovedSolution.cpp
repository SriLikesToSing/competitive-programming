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
    int n, m; cin >> n >> m;

    int pos = 1;
    long long int ans = 0;

    for(int x=0; x<m; x++){
        int now; cin >> now;

        if(now >= pos){
           ans+=now-pos;

        }else{
            ans+= n-(pos-now);
        }
      pos = now;
    }

    cout << ans << endl;




}
