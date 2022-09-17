#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int myXOR(int x, int y)
{
    int res = 0; // Initialize result

    // Assuming 32-bit Integer
    for (int i = 31; i >= 0; i--)
    {
       // Find current bits in x and y
       bool b1 = x & (1 << i);
       bool b2 = y & (1 << i);

        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);
        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}

if(x == 5){
  for(int x=0; x<5; x++){

  }
}
int main(){

   int n;
   cin >> n;

   int count = 0;
   for(int x=1; x<=n; x++){
     for(int y=1;y<=x; y++){
        int z = myXOR(x, y);
        int final = myXOR(z, z);

/*
            int temp = myXOR(z, y);
            int final  = myXOR(temp, x);
            int temp1 = myXOR(x, y);
            int final1 = myXOR(temp1, z);
*/
            if(z<=y && z+y>x && x+z>y && y+x>z){
                count++;

        }
     }
   }

cout << count << endl;



}
