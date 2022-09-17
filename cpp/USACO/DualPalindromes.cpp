/*
ID: 286002
PROG: dualpal
LANG: C++11
*/


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

bool isPalindromic(string s){
    vector<char> forward;
    vector<char> backward;
    bool bruh = false;
    for(int x=0; x<s.length(); x++){
        forward.push_back(s[x]);j
    }

    for(int x=s.length()-1; x>=0; x--){
        backward.push_back(s[x]);
    }

    if(forward ==  backward){
        bruh = true;
    }
    return bruh;
}

string convert(long long num, long long base){
    char map[256];
    map[10] =  'A';
    map[11] =  'B';
    map[12] =  'C';
    map[13] =  'D';
    map[14] =  'E';
    map[15]=    'F';
    map[16] =  'G';
    map[17]=  'H';
    map[18] =  'I';
    map[19] = 'J';
    map[20] = 'K';
    string s = "";
    string result = "";

    while(num>0){
       if(num%base >= 10){
        s+=map[num%base];
       }else{
        s+= std::to_string(num%base);
       }
       num/=base;
    }

    for(int x=s.length()-1; x>=0; x--){
        result+=s[x];
    }

    return result;

}

int main(){
    ifstream fin("dualpal.in");
    ofstream fout("dualpal.out");
    long long n, s; fin >> n >> s;
    s++;
    int num = s;
    int nums = 0;
    bool bruh = true;

    while(nums< n){
        int count = 0;
        for(int y=2; y<=10; y++){
            if(isPalindromic(convert(num, y))){
//                cout << convert(x, y) << endl;
                count++;
            }
        }
        if(count >= 2){
            fout << num << endl;
            nums++;
       }
     num++;
     }
}

