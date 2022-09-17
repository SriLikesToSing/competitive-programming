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
/*
FILE *in = fopen ("namenum.in", "r");
    FILE *in2 = fopen ("dict.txt", "r");
    FILE *out = fopen ("namenum.out","w");
    int nsolutions = 0;
    */
vector<string> names;

int firstDigit(int n)
{
    while (n >= 10)
        n /= 10;

    return n;
}

void isValid(string s1){
    //for all names in the dictionary, if name is in the list of names then add it to the names

    for(int x=0; x<5;x++){
        if(s1 == "GREG"){
            names.push_back(s1);
            break;
        }
    }
}

void solve(string s, string s1){
    char map[256];
    map['A'] = map['B'] = map['C'] = '2';
    map['D'] = map['E'] = map['F'] = '3';
    map['G'] = map['H'] = map['I'] = '4';
    map['J'] = map['K'] = map['L'] = '5';
    map['M'] = map['N'] = map['O'] = '6';
    map['P'] = map['R'] = map['S'] = '7';
    map['T'] = map['U'] = map['V'] = '8';
    map['W'] = map['X'] = map['Y'] = '9';



    if(s.length() == 0){
       isValid(s1);
    }


    solve(s.substr(1), s1 + map[s[0]]);
    solve(s.substr(1), s1 + map[s[]]);
    solve(s.substr(1), s1 + map[s]);

}

int main(){
    int n; cin >> n;
    solve(std::to_string(n), "");

    for(int x=0; x<names.size(); x++){
        cout << names[x] << endl;
    }
    if(names.size() == 0){
        cout <<"NONE" << endl;
    }
}
