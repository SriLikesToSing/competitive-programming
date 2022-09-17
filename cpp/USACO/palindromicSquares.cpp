/*
ID: 286002
PROG: palsquare
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
    ifstream fin("palsquare.in");
    ofstream fout("palsquare.out");
   int n; fin >> n;
vector<long long> num;
vector<long long> squares;
vector<string> resultNum;
vector<string> resultSquares;

   for(int x=1; x<=300; x++){
    num.push_back(x);
    squares.push_back(x*x);
   }
 //  cout <<"hi" << endl;
//   cout << isPalindromic(convert(11*11, n)) << endl;




   for(int x=0; x<squares.size(); x++){
    if(isPalindromic(convert(squares[x], n))){
        resultNum.push_back(convert(num[x], n));
        resultSquares.push_back(convert(squares[x], n));
    }
   }

   for(int x=0; x<resultSquares.size(); x++){
    fout << resultNum[x] << " " << resultSquares[x] << endl;
   }

}
