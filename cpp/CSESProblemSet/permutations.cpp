#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <bits/stdc++.h>
using namespace std;



int main(){
    int n; cin >> n;
    int finale[n];
    if(n==2 || n==3){
        cout << "NO SOLUTION" << endl;
    }



    //1234
    //2 4 1 3
    //1 3

    //1 2 3 4 5 6
    //2 4 6 3 5

    //5
    //2 4 1 3 5
    //7
    //2 4 6 1 3 5 7

    if(n%2==0 && n!=4){
        int startNum = 2;

        finale[0] = 2;
        finale[n-1] = n-1;
        for(int x=1;x<n-1; x++){
          if(x-1 < (n-1)/2){
            startNum+=2;
            finale[x] = startNum;
          }else if(x-1 == (n-1)/2){
            startNum-=3;
            finale[x] = startNum;
            startNum-=2;
            finale[x+1] = startNum;
            x++;
          }else if(x-1 > (n-1)/2){
            startNum-=2;
            finale[x] = startNum;
          }
        }
      }else{
        int startNum = 2;
        finale[0] = startNum;
        for(int x=1; x<n; x++){
            if(x < n/2){
                startNum+=2;
                finale[x] = startNum;
            }else if(x == n/2){
                startNum = 1;
                finale[x] = startNum;
            }else if(x > n/2){
                startNum+=2;
                finale[x] = startNum;
            }
        }
      }

      for(int x=0; x<n; x++){
        if(n == 1){
            cout << 1 << endl;
            break;
        }
    if(n==2 || n==3){
        cout << "NO SOLUTION" << endl;
        break;
    }else if(n==4){
        cout << 2 << " " << 4 << " " << 1 << " " << 3 << endl;
        break;
    }
        cout << finale[x] <<  " " ;
      }





}
