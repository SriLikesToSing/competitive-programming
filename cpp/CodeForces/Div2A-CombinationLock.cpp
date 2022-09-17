#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;




int main(){
   int n ;
   long long before, after;
   cin >> n >>  before >>  after;
   int count = 0;

   for(int x=0;x<n;x++) {
    int tempBefore= 0;
    int tempAfter = 0;
    tempBefore = before %10;
    tempAfter = after % 10;
    before /= 10;
    after/=10;
    cout << before << endl;

    int diffOne = abs(tempBefore - tempAfter);
    int diffTwo = tempBefore + (10-tempAfter);
    int diffThree = (10-tempBefore) + tempAfter;


    int bruh = std::min(diffOne, diffTwo);
    int min = std::min(bruh, diffThree);
    count += min;

   }
   cout << count << endl;
}
