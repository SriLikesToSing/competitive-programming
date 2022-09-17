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

long long arr[1000000000][1000000000];
vector<string> bruh;


string multiply(int start, int end, int multiplier){

string result;
for(int x=start; x<=end; x++){
    result+=bruh[x];
}

for(int x=0; x<multiplier; x++){
    result+=result;
}
    return result;
}


int main(){
int t; cin>> t;
for(int x=0; x<t; x++){

   string s; cin >> s;
   string result;

   for(int x=0; x<s.length(); x++){
    bruh.push_back(s[x]);
   }


   for(int y=0; y<bruh.size()-1; y++){
    if(isdigit(s[y]) && s[y+1].equals("(")){
        int start = y+1;
        int end = 0;
        int i = c - '0';
       for(int a=y+1; a=bruh.size(); x++) {
        if(bruh[a].equals(")")){
            end = a-1;
            break;
        }
       multiply(start, end, i);
       }
    }else if(isalpha(bruh[y])){
        result+=bruh[y];
    }
   }
   int xVal = 1;
   int yVal = 1;
   for(int y=0; y<bruh.size(); y++){
    if(bruh[y].equals("N")){
        if(check if outofBounds){

        }else{
            arr[xVal+1][yVal];
        }
    }else if(bruh[y].equals("W")){
        if(check){

        }else{
            arr[]
        }
    }else if(bruh[y].equals("E")){

    }else if(bruh[y].equals("S")){

    }


   }

   cout << arr[xVal]  << " " arr[yVal] << endl;

}



}
