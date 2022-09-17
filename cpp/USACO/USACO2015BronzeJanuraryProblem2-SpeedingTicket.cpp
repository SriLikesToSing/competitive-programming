/*
ID: 286001
PROG: speeding
LANG: C++
*/


#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  //input
  //make hash map
  //ma

  int input1, input2, a,a1, b,b1, c, c1;
  ofstream fout("speeding.out");
  ifstream fin("speeding.in");

  fin >>input1 >> input2>> a >> a1 >> b >> b1 >> c >> c1;

  int point1 = 0;
  int point2 = a;
  int point3 = a + b;
  int point4 = a + b+ c;



int keySpeeds[] = {a1, b1, c1};

 int maxDiff = 0;

 int d, d1, e, e1, f, f1;
 fin  >> d >> d1 >> e >> e1 >> f >> f1;
 int point5 = 0;
 int point6 = d;
 int point7 = d + e;
 int point8 = d + e + f;
 int mySpeeds[] = {d1, e1, f1};
 int points[] = {point5, point6, point7, point8};

  for(int x = 0; x<=2; x++){
    for(int y=points[x]; y<= (points[x+1]); y++){
      if(y>=point1 && y<=point2 ){
        if(mySpeeds[x] > keySpeeds[0] && std::abs(mySpeeds[x]-keySpeeds[0])){
            maxDiff = std::abs(mySpeeds[x]-keySpeeds[0]);
        }
      }
        if(y>point2 && y<=point3){
          if(mySpeeds[x] > keySpeeds[1] && std::abs(mySpeeds[x]-keySpeeds[1])){
              maxDiff = std::abs(mySpeeds[x]-keySpeeds[1]);
        }
      }
      if(y>point3 && y<=point3){
          if(mySpeeds[x] > keySpeeds[2] && std::abs(mySpeeds[x]-keySpeeds[2])){
              maxDiff = std::abs(mySpeeds[x]-keySpeeds[2]);
        }
     }
   }
  }
  fout << maxDiff << endl;
}




//0   40    90   100
//0   40  60     100





