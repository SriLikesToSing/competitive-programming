
/*
 ID: 286002
 PROG: friday
 LANG: C++
*/

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    ofstream fout("friday.out");
  ifstream fin("friday.in");

    int n;
    fin >> n;
    bool isLeap;
    int arr[7] = {0, 0, 0, 0, 0, 0, 0};
    int monthSize[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int days;
    int numofDays = 0;

    for(int x=1900; x<1900+n; x++){
        if(x%400==0 || (x%4==0 && x%100!=0)){
            monthSize[1] = 29;
        }else{
            monthSize[1] = 28;
        }
        for(int y=0; y<12; y++){
               for(int z=0; z<monthSize[y]; z++){
                if(z == 12){
                    arr[numofDays]++;
                }
        if(numofDays == 6){
            numofDays = 0;
        }else{
            numofDays++;
        }

    }
    }
    fout << arr[5]<< " " << arr[6]<< " "  << arr[0]<< " " << arr[1]<< " " << arr[2]<< " " << arr[3]<< " "  << arr[4]<< endl;

}
