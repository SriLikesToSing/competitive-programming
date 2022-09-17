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
   long long n, m; cin >>n >> m;
   vector<long long > jobs;
   long long time = -1;
   long long houses[n];

   for(long long x=0; x<n; x++){
        houses[x] = x+1;
   }

   for(long long x = 0; x<m; x++){
    int num; cin >> num;
    jobs.push_back(num);
   }

  for(long long x=0; x<n;x++){
    if(jobs.size()==0){
        break;
    }

    if(houses[x] == jobs[0]){
        long long bruh = m;

        jobs.erase(jobs.begin() + 0);
        bool nig = true;
        while(nig == true && jobs.size()>0){
            if(jobs.size() == 0){
                break;
            }
            if(jobs[0] == houses[x]){
  //              cout << "jobs[0]" << endl;
   //             cout << jobs.size() << endl;
                jobs.erase(jobs.begin() + 0);
   //             cout << jobs.size() << endl;
            }else if(jobs[0]!=houses[x] ){
                nig = false;
                break;
            }
        }
    }

    if(x == n-1){
        x = -1;
    }

    time++;
 //   cout << time << endl;
 // cout << "jobs:" << endl;
//  cout << jobs.size()<< endl;
  }

  cout << time << endl;
}


