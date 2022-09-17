#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

long long n, k, m, cost[100000], curr_min;
long long answer =0;
int visited[100000];
vector<long long> adj[100000];



void dfs(long long node){
    if(!visited[node]){
        visited[node] = true;
        curr_min = min(curr_min, cost[node]);
        for(int x: adj[node]){
           dfs(x);
        }
    }
}
int main(){
    cin >> n >> k >> m;
    string words[n];
    string sentence[m];
    for(int x=0; x<n; x++){
        string s;
        cin >> s;
        words[x] = s;
    }
    for(int x=0;x<n; x++){
        int bruh;  cin>> bruh;
       cost[x] = bruh;
    }

    for(int x=0; x<k; x++){
        int num; cin >> num;
        if(num == 1){
            int bruh;
            cin>> bruh;
            bruh--;
            adj[bruh].push_back(bruh);
        }else if(num>1){
            int firstLink;
            cin>> firstLink;
            firstLink--;
            int prev = 0;
            for(int y=1; y<num; y++){
                if(y==1){
                    int link;
                     cin >> link;
                     link--;
                     adj[firstLink].push_back(link);
                     adj[link].push_back(firstLink);
                     prev = link;
                     continue;
                }
                int link;
                cin >> link;
                link--;
                adj[link].push_back(prev);
                adj[prev].push_back(link);
                prev = link;
            }
        }




        }

    for(int x=0;x<m; x++){
        string s;
        cin >> s;
        sentence[x] = s;
    }

    for(int x=0; x<m; x++){
        for(int y=0; y<n; y++){
            if(!visited[y]){
           if(words[y]==sentence[x]) {
                curr_min = cost[y];
                dfs(y);
                answer+=curr_min;
           }
        }
    }
}
    cout << answer << endl;








}
