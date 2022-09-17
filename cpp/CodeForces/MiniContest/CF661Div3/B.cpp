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

	for(int x=t; x<t; x++){
		int n; cin >> n;
		vector<int> a;
		vector<int> b;

		int minA, minB = INT_MAX;

		for(int y=0; y<n; y++){
			int num; cin >> num;
			a.push_back(num);
			minA = min(num, minA);
		}

		for(int y=0; y<n; y++){
			int num; cin >> num;
			b.push_back(num);
			minB = min(num, minB);
		}
		int count = 0;

		for(int y=0; y<n; y++){
			//two minus

			int minVal = min(abs(minA-a[y]), abs(minB-b[y]));
			count+= minVal;
			a[y]-=minVal;
			b[y]-=minVal;
		}



		for(int y=0; y<n; y++){
			if(a[y]!=minA){
				count+=abs(minA-a[y]);
				a[y]-=abs(minA-a[y]);
			}

			if(b[y]!=minB){
				count+=abs(minA-a[y]);
				b[y]-=abs(minB-a[y]);
			}

		}
		cout << count << endl;








	}




}
