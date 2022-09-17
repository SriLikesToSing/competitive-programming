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
int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}


int main(){
   long long n ; cin >> n;
   long long arr[n];
   long long sorted[n];
   vector<long long> pairs;
   for(long long x=0; x<n; x++){
    long long num; cin >> num;
    arr[x] = num;
    sorted[x] = num;
   }

  long long i = sizeof(sorted)/sizeof(sorted[0]);
    sort(sorted, sorted+i, greater<long long>());

    long long diff = sorted[0]-sorted[n-1];

   int sum = 0;
   int index = n-1;
   for(int x=0; x<n; x++) {
 //   cout << sorted[x] << endl;
    if(sorted[x]-sorted[index] == diff){
        sum+=(sorted[x]+sorted[index]);
    }
    index--;
   }
   int count = sum/diff;
   if(diff == 1){
        count = diff;
   }

   cout << diff << " " << count<< endl;





}
