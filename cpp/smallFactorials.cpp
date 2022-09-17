#include <iostream>
#include <vector>
#include <string>
using namespace std;


string factorial(int x){
    string arr[1];
    for(int bruh=x; bruh>1;x-=2){
        int temp = bruh * bruh-1;
        arr[0]+= to_string(temp);
    }
    return arr[0];



}


main(){
int N;
cin >> N;
for(int x=0; x<N; x++){
    int num;
    cin >> num;
    cout << num << endl;
    string output = factorial(num);
    cout << output << endl;
    }
}
