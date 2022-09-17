/*
ID: 286001
LANG:C++
PROG:gift1
*/

#include <bits/stdc++.h>
using namespace std;



int main(){
    ofstream fout("ride.out");
    ifstream fin("ride.in");
    int N;
    cin>>N;
    std::map<std::string, int> names;

    for(int x=0;x<N;x++){
        string name;
        cin>>name;
        names.insert(name, 0);
    }
    for(int x=0;x<N;x++){
        string n;
        int money;
        int amtOfPeople;
        cin>>money>>amtOfPeople;
        names[x] -=(money+(money%amtOfPeople));
        for(int x=0;x<amtOfPeople;x++){
            string a;
            cin>>a;
            names[a] += (money/amtOfPeople);
        }
    for(int x=0;x<N;x++){
        cout << names.first <<" " << names.second << endl;
    }
  }





    cout<< ick << endl;
}

