#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){


    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int sumFirst = t1 + (v1*s) + t1;
    int sumSecond = t2 + (v2*s) + t2;


    if(sumFirst < sumSecond){
        cout << "First" << endl;
    }

    if(sumFirst > sumSecond){
        cout << "Second" << endl;
    }
    if(sumSecond == sumFirst){
        cout << "Friendship" << endl;
    }

}
