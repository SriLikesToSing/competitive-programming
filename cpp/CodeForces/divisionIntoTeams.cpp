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
    vector<int> playas;
    vector<int> list1;
    vector<int> list2;
    int sum1 = 0;
    int sum2 = 0;

    for(int x=0; x<n; x++){
        int num; cin >> num;
        playas.push_back(num);
    }
    vector<int> ref = playas;

    //sort the arrayList
    sort(playas.begin(), playas.end(), greater<int>());

    for(int x=0; x<n; x++){
        if((x+1)%2 == 0){
            list1.push_back(playas[x]);
        }else{
            list2.push_back(playas[x]);
        }
    }

    cout << list2.size() << endl;
    for(int x=0; x<list2.size(); x++){
        cout << list2[x] << " ";
        cout << list2[x] << endl;
    }

    cout << endl;

    cout << list1.size() << endl;
    for(int x=0; x<list1.size(); x++){
        cout << list1[x] <<  " ";
    }











}
