#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

// function to print string in sorted order
void sortString(string &str)
{
   sort(str.begin(), str.end());
}

// Driver program to test above function

int main(){

   string s; cin >> s;
   sortString(s);
   int count = 0;
   for(int x=0; x<s.length()-1; x++){
    if(s[x] ==s[x+1]){
        count++;
        x+=2;
        continue;
    }
    count++;

   }
   if(count%2 ==1) {
    cout << "IGNORE HIM! " << endl;
   }else{
    cout <<"CHAT WITH HER!" << endl;

   }


}
