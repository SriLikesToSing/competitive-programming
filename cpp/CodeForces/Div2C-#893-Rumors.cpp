#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    int cost[n];
    long long answer =0;
    bool visited[100000];
    vector<int> adj[100000];

    for(int x=0; x<n; x++){
        //adding all cost values
        int bruh;
        cin >> bruh;
        arr[x] = bruh;
    }

    for(int y=0; y<m; y++){
        //adding pairs of friends
        int xVal, yVal;
        cin >> xVal >> yVal;
        //connecting the edges
        xVal--;
        yVal--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int z=0; z<n; z++){
       if(!visited[z]) {
        int curr_min = visited[z];
        dfs(z);
        answer += curr_min;
       }
    }













}




