#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){
long long h, w;
cin >> h >> w;
long long total = 1;
if(h%2 ==1)    {
    long long oddPieces = w/2;
    long long evenPieces = w-oddPieces;
    total = ((h/2 + 1)* evenPieces) + (oddPieces*(h/2));

}else if(h%2==0){
    total = h/2 * w;
}

cout << total << endl;



}
