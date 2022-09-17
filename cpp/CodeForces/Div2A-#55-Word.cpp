#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    string s;
    cin >> s;

    char upperCase[] = {'A' , 'B', 'C' ,'D' ,'E', 'F', 'G', 'H', 'I' ,'J', 'K', 'L', 'M', 'N' ,'O', 'P', 'Q' ,'R' ,'S', 'T',  'U',  'V' ,'W', 'X', 'Y', 'Z'};
    char lowerCase[] = {'a' , 'b', 'c' ,'d' ,'e', 'f', 'g', 'h', 'i' ,'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q' ,'r' ,'s', 't',  'u',  'v' ,'w', 'x', 'y', 'z'};
    int numUpperCase = 0;
    int numLowerCase = 0;
    for(int x=0; x<s.length(); x++) {
        for(int y=0; y<26; y++){
            if(s[x] == upperCase[y]){
               numUpperCase++;
            }else if(s[x] == lowerCase[y]){
                numLowerCase++;
            }
        }
    }
    if(numLowerCase>=numUpperCase){
    for(int x=0; x<s.length(); x++) {
        for(int y=0; y<26; y++){
            if(s[x] == upperCase[y]){
                s[x] = lowerCase[y];
            }
        }
    }
}else if(numLowerCase<numUpperCase){
    for(int x=0; x<s.length(); x++) {
        for(int y=0; y<26; y++){
            if(s[x] == lowerCase[y]){
                s[x] = upperCase[y];
            }
        }
    }

}



   cout << s << endl;




}
