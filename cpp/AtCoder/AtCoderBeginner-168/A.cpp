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
    int n; cin >> n;

    if(n%10 == 2 || n%10 == 4 || n%10 == 5 || n%10 == 9) {
        cout << "hon"  << endl;
    }else if(n%10 == 0 || n%10 == 1 || n%10 == 6 || n%10 == 8){
        cout << "pon"  << endl;
    }else if(n%10 == 3){
        cout <<"bon"  << endl;
    }









}
