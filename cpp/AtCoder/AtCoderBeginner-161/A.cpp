#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


int main(){
   int x, y, z;
   cin >> x >> y >> z;

   int temp = x;
   x = y;
   y = temp;
   int temp1 = x;
   x = z;
   z = temp1;
   cout << x << " " << y << " " << z << endl;
}
