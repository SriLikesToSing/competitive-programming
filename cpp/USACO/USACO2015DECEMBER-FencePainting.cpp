/*
ID: 286001
PROG: paint
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  ofstream fout ("paint.out");
  ifstream fin ("paint.in");
  int a, b, c, d;
  fin >> a >> b >> c >>d;





  int temp = std::min(a, b);
  int temp1 = std::min(temp, c);
  int min = std::min(temp1, d) ;

  int Temp= std::max(a, b);
  int Temp1= std::max(Temp, c);
  int max= std::max(Temp1, d) ;
  int len = 0;
  for(int x=min+1; x<=max ;x++){
    if((x <= b && x>a) || (x<=d && x> c))  {
        len++;
    }else{
      continue;
    }
  }
  fout << len << endl;




}
