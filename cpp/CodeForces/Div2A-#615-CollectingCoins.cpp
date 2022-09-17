#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
int t;
cin >> t;

for(int x=0 ; x<t; x++){

    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int arr[3] = {a, b, c};
    int temp = std::max(a, b) ;
    int max = std::max(temp, c);


   for(int y=0;y<3;y++){
     if(arr[y]!=max) {
      n-=(max-arr[y]);
       }
     }

  if(n < 0 ) {
    cout << "NO" << endl;
    break;
  }else{

  if(n%3 ==0){
      cout << "YES" << endl;;
  }else{
      cout << "NO" << endl;
  }
}

}

}
