#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

int main(){
   int n; cin >> n;
   int arr[7];
   for(int x=0; x<7; x++){
    int num; cin >> num;
    arr[x] = num;
}

int index = 0;
while(n>=0){

    n-=arr[index];
    if(n <= 0){
       break;
    }



    if(index == 6){
        index = 0;
    }else{
        index++;
    }
}




cout << index+1 << endl;

}
