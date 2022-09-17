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
	int t; cin >> t;

	for(int x=0; x<t; x++){
		int n; cin >> n;
		vector<int> arr;
		for(int x=0; x<n; x++){
			int num; cin >> num;
			arr.push_back(num);
		}

		//sort the vector
		sort(arr.begin(), arr.end()); 


		for(int x=1; x<n; x++){
			if(arr[x]-arr[x-1]<=1){
				arr[x-1] = 0;
			}
		}
		int count = 0;
		for(int x=0; x<n; x++){
			if(arr[x] == 0){
				count++;
			}
		}
		if(count == n-1){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}

	}
}

