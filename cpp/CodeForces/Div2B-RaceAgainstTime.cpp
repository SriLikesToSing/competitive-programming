#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
    double h, m, s, t1, t2;
    cin >> h >>  m >>  s>>  t1 >>  t2;
    string bruh = "YES";
    m = (12*m)/60.0;
    s = (12*s)/60.0;
    if(m == 0 ){
      m = 12;
    }
    if(s == 0){
      s = 12;
    }
    cout << m << " " << s << endl;
   for(double x=t1;x<=12;x++){
     if(x == t2){
       bruh = "YES";
       break;
     }


     if(x==(int)m|| x==(int)s || x==(int)h){
       bruh = "NO";
       break;
     }
      if(x==12){
       x = 1;
       continue;
     }

   }
   if(bruh == "NO"){


   for(double x=t1; x>=1;x--){
     if(x == t2){
       bruh = "YES";
       break;
     }
     if((x == t1 && x==(int)m && (int(s)!=0 || int(m) !=0))){
      if(x==1){
       x = 12;
       continue;
       }
       continue;
     }
     if(x==(int)m|| x==(int)s || x==(int)h){
       bruh = "NO";
       break;

     }
     if(t1 == 1){
       t1 = 12;
       continue;
     }
   }
  }



cout << bruh << endl;













}


