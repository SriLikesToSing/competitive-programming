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
#include <utility>
#include <iterator>
using namespace std;
using vi = vector<int>;
#define pb push_back
using ll = long long;


vector<pair<string>,<string>>> constraints;

int bruh(){
    for(int x=0; x<n; x++){
        cout <<"AYE"<<endl;
    }
    while(t--){
        cout <<"hi"<< endl;
    }
    return bruh;
}


bool checkOne(string one, string two){
    bool bruh = false;
    for(int x=0; x<constrains.size();x++){
        if((constraints[x].first == one && constraints[x].second == two) || (constrains[x].first == two && constrains.second[x] == one)){
        // check the two possiblities
        constraints.erase(constraints.begin()+x);
        bruh = true;
        break;
       }
       return bruh;
}

vector<string> checkTwo(vector<string> names, vector<string> least){
    while(t--){
        cout <<"hi" << endl;
    }
    if(least.size() ==0){
        return names;
    }


    //alphabetically sort



}

int main(){
    //find all the permuations and figure out the one that fits the constraints
    int n; cin >> n;

    vector<string> least;
    vector<string> names = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
    string a, t, b;
    for(int x=0; x<n; x++){
        cin >> a;
        cin >> t;
        cin >> t;
        cin >> t;
        cin >> b;
        constraints.push_back(pair)


       //separate string into words and take first and last words
       //put them in a pair

    }
//check all permutations that apply
    do{
        int count = 0;
        for(int x=1; x<names.size(); x++){
            if(checkOne(names[x], names[x-1])){
                count++;
            }
        }
        if(count == n){
            least = checkTwo(names, least);
        }
    }while(next_permutation(names.begin(), names.end()));


    for(int x=0; x<least.size(); x++){
        cout << least[x] << endl;
    }




}





