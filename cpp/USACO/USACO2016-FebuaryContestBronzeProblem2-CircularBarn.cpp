#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <map>
#include <ctype.h>
#include <set>
#include <iterator>
using namespace std;

int main(){
  int n; cin >> n;
  int arr[n];
  int minMoves = INT_MAX;
  int index;

  for(int x=0; x<n; x++){
    int num; cin >> num;
    arr[x] = num;

  }


  for(int x=1; x<=n; x++){
    int tempMoves = 0;
    for(int y=x+1; y<(x-1)+(n-x); y++){
        cout << "TempMoves" << endl;
        cout << arr[y-1] << endl;
        tempMoves+=(2*((arr[y-1])%x));
    }
    minMoves = min(minMoves, tempMoves);
  }
  cout << "moves" << endl;
  cout << minMoves << endl;


}
