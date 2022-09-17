#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N;
    cin >> N;
    for(int x =0; x<N; x++){
    std::vector<int> player1;
    std::vector<int> player2;
    int numOfCards, player1Cards, player2Cards;
        cin >> numOfCards >> player1Cards >> player2Cards;

        for(int y=0; y<player1Cards;y++){
            int temp;
            cin >> temp;
            player1.push_back(temp);
        }
        for(int y=0; y<player2Cards;y++){
            int temp;
            cin >> temp;
            player2.push_back(temp);
        }
               sort(player1.begin(), player1.end(), greater<int>());
               sort(player2.begin(), player2.end(), greater<int>());
        while(player1.size()>0 || player2.size()>0){
            if(player1[0] > player2[0]){
                player1.push_back(player2[0]);
               player2.pop_back();
               sort(player1.begin(), player1.end(), greater<int>());
i
             }
            if(player2[0] > player1[0]){
                player2.push_back(player1[0]);
                player1.pop_back();
               sort(player2.begin(), player2.end(), greater<int>());




          }
          if(player1.size()==0){
            break;
          }else if(player2.size()==0){
            break;
          }
        }
        if(player2.size()==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}
