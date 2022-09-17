#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

vector<int> values;
bool match[30][30][30];



void search(int a, int b, int c, int fillIndex, int maxA, int maxB, int maxC){
    //if bucket a is empty
    //add value of bucket C into vector
    int arr[3] = {a, b, c};
    if(match[a][b][c] == true){
        return;
    }


    match[a][b][c] =  true;
    cout << a << " " << b << " " << c << " " << endl;
    values.push_back(c);

    if(fillIndex == 0){
        int C = arr[0] + arr[2];
        int remainC = 0;
        if(C-maxC>0){
        remainC = C-maxC;
        C-=remainC;
    }
        int B1 = remainC+arr[1];
        int remainB1 =0;

        if(B1-maxB>0){
        remainB1 = (B1-maxB);
        B1-=remainB1;
    }
        int remainA1 = remainB1;
        search(remainA1, B1, C, 2, maxA, maxB, maxC);
        //
        int B = arr[0] + arr[1];
        int remainB = 0;
        if(B-maxB>0){
        remainB = B-maxB;
        B-=remainB;
    }
        int C1 = remainB+arr[2];
        int remainC1 =0;

        if(C1-maxC>0){
        remainC1= (C1-maxC);
        C1-=remainC1;
    }
        int remainA2 = remainC1;
        if(B ==8){
            cout <<"B IS 8" << endl;
        }
        search(remainA2, B, C1, 1, maxA, maxB, maxC);
}else if(fillIndex == 1){
        int A = arr[1] + arr[0];
        int remainA = 0;
        if(A-maxA>0){
        remainA = A-maxA;
        A-=remainA;
    }
        int C1 = remainA+arr[2];
        int remainC1 =0;

        if(C1-maxC>0){
        remainC1= (C1-maxC);
        C1-=remainC1;
    }
        int remainB1= remainC1;
		int bruh = 5;

        search(A, remainB1, C1, 0, maxA, maxB, maxC);
        //

        int C = arr[1] + arr[2];
        int remainC = 0;
        if(C-maxC>0){
        remainC = C-maxC;
        C-=remainC;
    }
        int A1= remainC+arr[0];
        int remainA1=0;

        if(A1-maxA>0){
        remainA1= (C1-maxA);
        A1-=remainB1;
    }
        int remainB2 = remainA1;

        search(A1, remainB2, C, 2, maxA, maxB, maxC);


     }else if(fillIndex == 2){
        int A = arr[0] + arr[2];
        int remainA = 0;
        if(A-maxA>0){
        remainA = A-maxA;
        A-=remainA;
    }
        int B1 = remainA+arr[1];
        int remainB1 =0;

        if(B1-maxB>0){
        remainB1 = (B1-maxB);
        B1-=remainB1;
    }
        int remainC1= remainB1;
        cout << "B1" << " " << B1 << endl;

        search(A, B1, remainC1, 0, maxA, maxB, maxC);
//
        int B = arr[1] + arr[2];
        int remainB = 0;
        if(B-maxB>0){
        remainB = B-maxB;
        B-=remainB;
    }
        int A1= remainB+arr[0];
        int remainA1 =0;

        if(A1-maxA>0){
        remainA1= (A1-maxA);
        A1-=remainA1;
    }
        int remainC2= remainA1;
        if(B ==8){
            cout << "B IS 8" << endl;
        }
        search(A1, B, remainC2, 1, maxA, maxB, maxC);
     }
 }







   //loop through



int main(){
 int a, b, c;
 cin >> a >> b >> c;
search(0, 0, c, 2, a, b, c);

//sort vector full of values
cout << "Hi " << endl;
    cout << "hello" << endl;
sort(values.begin(), values.end());
    cout << values[0] << " " ;
    for(int x=1; x<values.size();x++){
        if(values[x-1] == values[x] || values[x] == 0){
            continue;
        }
        cout << values[x] << " " ;
    }

}
//1 2 8 9 10
