#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;
    int starting_min = (11*60)+11;
    for(int x=0; x<N; x++){
        int result = 0;
        int D, H, M;
        cin >> D >> H >> M;

        if(D == 11){
            int end_min = (H*60)+M;
        }
        if(D == 12){
            result = (((24*60)+59)-((12*60)+11))+(((H+1)*60)+M);
        }
        if(D == 13){
            result  = (((23*60)+59)-((12*60)+11)) + ((23*60)+59)+(((H+1)*60)+M);
        }
     if(D==14){
            result  = (((23*60)+59)-((12*60)+11)) + 2*((23*60)+59)+(((H+1)*60)+M);
    }
    if(result <= 180){
        result = -1;
    }
    cout << result << endl;

    }
}

