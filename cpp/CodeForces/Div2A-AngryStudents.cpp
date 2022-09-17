#include <bits/stdc++.h>
using namespace std;

int check(char bruh[], int length){
    int sum = 0;
    int bb= 0;
    for(int x=1; x<length; x++){
        if(bruh[x-1] == 'A' &&  bruh[x] == 'P'){
            sum++;
        }
    }
    if(sum ==0){
        bb= 1;
    }
    return bb;
}

int main(){
    int N;
    cin >> N;
    for(int x=0; x<N; x++){
        int count = 0;
        int len;
        cin >> len;
        char arr[len];
        for(int y=0;y<len; y++){
            char letter;
            cin >> letter;
            arr[y] = letter;
            cout << arr[y] << endl;
        }
        int numofA = 0;
        cout << "hi" << endl;
        cout << check(arr, len) << endl;
        while(check(arr, len) !=  1)
            int index = 0;
            for(int z=1; z<len; z++){
             if(arr[z-1] == 'A' && arr[z] == 'P'){
                index = z;
                 continue;


            }
            count++;
            if(check(arr, len) == 1){
                break;
            }
        }
        cout << count << endl;
    }
}


