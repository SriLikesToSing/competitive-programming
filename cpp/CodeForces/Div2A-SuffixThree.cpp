#include <bits/stdc++.h>
using namespace std;

int main(){
 int N;
 cin >> N;
 string jap1= "desu";
 string jap2 = "masu";
 string filipino = "po";
 string korean = "mnida";
 for(int x=0; x<N; x++){
    string name;
    cin >> name;
    if(name.substr(name.length()-2,name.length()).compare(filipino)==0) {
        cout<<"FILIPINO"<< endl;
    }else if(name.substr(name.length()-4, name.length()).compare(jap1)==0||name.substr(name.length()-4, name.length()).compare(jap2)==0){
        cout<<"JAPANESE"<<endl;
    }else if(name.substr(name.length()-5, name.length()).compare(korean)==0){
        cout<<"KOREAN"<<endl;;
    }
 }


}
