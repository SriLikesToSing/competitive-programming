/*
ID: 286002
PROG: crypt1
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
using namespace std;

bool inSet(int num, int arr[], int n){
    int temp;
    bool bruh = true;
    int index = n-1;
    while(num>0 && index>-1){
 //       cout << num << endl;
        bool nog = false;
        for(int x=0; x<n; x++){
            if(arr[x] == num%10){
                nog = true;
                break;
            }

        }
        if(nog == true){
            num/=10;
            index--;
            continue;
        }else{
            bruh = false;
            break;
        }
    }
    return bruh;
}


int main(){

    ifstream fin("crypt1.in");
    ofstream fout("crypt1.out");

    int n; fin >> n;
    int arr[n];
    int count = 0;
    for(int x=0; x<n; x++){
        int num; fin >> num;
        arr[x] = num;
    }
     int x = sizeof(arr)/sizeof(arr[0]);
     sort(arr, arr+x);

     int smallestThree = arr[0] * 100;
     int biggestThree = (arr[n-1] * 100) + (arr[n-2] * 10) + (arr[n-3]);
     int smallestTwo = arr[0] * 10;
     int biggestTwo = (arr[n-1] * 10) + (arr[n-2]);
//     cout << biggestTwo << endl;

     for(int x=smallestThree; x<=biggestThree; x++){
        for(int y=smallestTwo; y<=biggestTwo; y++){
            if(inSet(x*y, arr, n) && inSet(x, arr, n) && inSet(y, arr, n) && x*y <=9999){
                int temp = y;
                temp/=10;
           //     cout << "HELLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO" << endl;
            //    cout << x*y << endl;
                if(inSet(x*(y%10), arr, n) == true && inSet(x*temp, arr, n) == true && x*(y%10) <= 999 && x*temp <=999){
                    count++;
                }else{
                    continue;
                }
            }else{
                continue;
            }
        }
     }
     fout << count << endl;
}
