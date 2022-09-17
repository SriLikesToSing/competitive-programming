#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){
   string s1, s2;
   cin >>s1 >> s2;
transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);


if(s1.compare(s2) == 0){
    cout << 0 << endl;
}else if(s2.compare(s1) < 0){
    cout << 1 << endl;
}else{
    cout << -1 << endl;
}



}
