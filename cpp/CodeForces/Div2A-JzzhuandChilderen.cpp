#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
using namespace std;


int main(){
    int n, m; cin >> n >>  m;
    vector<int> sum;
    vector<int> values;
    vector<int> indexes;

    for(int x=0;x<n; x++) {
       int num; cin >> num;

       sum.push_back(0);
       indexes.push_back(x+1);
       values.push_back(num);
    }

    int child = 0;
    while(sum.size()>=1){
        if(sum.size() ==1){
            child = 1;
            break;
        }
        sum[0]+=m;
        if(sum[0] >= values[0]){
            sum.erase(sum.begin());
            indexes.erase(indexes.begin());
            values.erase(values.begin());
        }else if(sum[0] <values[0]){
            sum.push_back(sum[0]);
            indexes.push_back(indexes[0]);
            values.push_back(values[0]);

            sum.erase(sum.begin());
            indexes.erase(indexes.begin());
            values.erase(values.begin());
        }


      if(sum.size() == 1){
        child = indexes[0];
        break;
      }
    }
    cout << child << endl;
}
