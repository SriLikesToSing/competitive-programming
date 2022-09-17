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

bool isPalindromic(string s){
    vector<char> forward;
    vector<char> backward;
    bool bruh = false;
    for(int x=0; x<s.length(); x++){
        forward.push_back(s[x]);
    }

    for(int x=s.length()-1; x>=0; x--){
        backward.push_back(s[x]);
    }

    if(forward ==  backward){
        bruh = true;
    }
    return bruh;
}

int main(){
    vector<long long> palindromes;

    for(int x=100; x<=999; x++){
        for(int y=100; y<=999; y++){
            long long num = x*y;
            if(isPalindromic(to_string(num))){
                cout << x*y << endl;
                palindromes.push_back(num);
            }
        }

    }

    cout << palindromes[palindromes.size()-1] << endl;

}
