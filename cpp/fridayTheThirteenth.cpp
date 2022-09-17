/*
ID: 286001
LANG:C++
PROG:gift1
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;
    int startingYear = 1900;
    int startingDay =1;
    int normalYear[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
    int leapYear[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
    int numofdays[7] = {0, 0, 0, 0, 0, 0, 0};
    int Week[7] = {1, 2, 3, 4, 5, 6, 7}

    for(int x=1900;x<N;x++){
        for(int y=0;y<12;y++){
            if(x==leapyear){
                for(int z=0;z<leapYear[y];z++){
                   if(z==13) {
                    numofdays[startingDay]++;
                   }
                }
                startingDay++;
            }else{
                for(int z=0;z<normalYear[y];z++){

                }
            }
        }
    }
}
