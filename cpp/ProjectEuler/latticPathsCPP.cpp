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
#include <utility>
#include <iterator>
using namespace std;
using vi = vector<int>;
#define pb push_back
using ll = long long;


vector<int> bruh;
long long totalPaths(int xPos, int yPos){
    if(xPos == 20 && yPos == 20){
        bruh.pb(1);
    }

    if(xPos+1<=20){
        totalPaths(xPos+1, yPos);
    }
    if(yPos+1<=20){
        totalPaths(xPos, yPos+1);
    }
}

int main(){
    cout <<"Processing...."<<endl;
    totalPaths(0, 0);
    long long sum = 0;
    for(long long x=0; x<bruh.size(); x++){
        sum++;
    }
    cout << "done!" << endl;
    cout << sum << endl;
}
