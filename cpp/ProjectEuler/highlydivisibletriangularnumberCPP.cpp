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

long long dp[10000000] = {0};
//map<long long, long long> divisors;

bool isSatisfied(long long num){
	long long sqrt = (long long)sqrt(num);
	for(int x=1; x<=sqrt; x++)	{
		
			
	}



}

int main(){
	dp[0] = 1;
    long long count= 1;
	long long num = 2;
	long long answer = 1;
	bool bruh = false;

	while(bruh == false){
		answer+=num;
		num++;

		if(isSatisfied(answer) > 500){
			bruh = true;
			break;
		}
	/*	
		if(isSatisfied(dp[count])){
			answer = dp[count];
			break;
		}
	*/
	}



cout << answer << endl;


}
