/*
ID: 286001
PROG: promote
LANG: C++
*/



#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
    ofstream fout("promote.out");
    ifstream fin("promote.in");

    int w1, w2, x1, x2, y1, y2, z1, z2;
    int out1 = 0;
     int out2 = 0;
     int out3 =0;
    fin >> w1 >> w2>> x1 >> x2 >> y1>> y2>> z1 >> z2;

        int bruh1 = z2-z1;
        out1+=bruh1;
        out2+=bruh1;
        out3+=bruh1;

        int bruh2 = y2-y1;
        out3+=bruh2;
        out2+=bruh2;
        int bruh3= x2-x1;
        out3+=bruh3;





    fout << out3 << endl;
    fout << out2 << endl;
    fout << out1 << endl;


}
