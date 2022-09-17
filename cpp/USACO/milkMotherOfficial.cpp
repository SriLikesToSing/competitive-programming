/*
ID: 28600
PROG: milk3
LANG: C++11
*/
#include <fstream>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
ifstream fin("milk3.in");
ofstream fout("milk3.out");
int A, B, C;
int bucketsCap[4] = {};
int used[33000] = {};
set<int> Cs;
int getState(int A, int B, int C)
{
    int state = 0;
    state |= A;
    state |= (B << 5);
    state |= (C << 10);
    return state;
}
int getNumb(int state, int whichNumber)
{
    int mask = 31 << ((whichNumber-1) * 5);
    return (state & mask) >> ((whichNumber-1) * 5);
}
int setNumb(int state, int whichNumb, int newValue)
{
    int mask = ~(31 << ((whichNumb-1) * 5));
    state &= mask;
    mask = newValue << ((whichNumb-1)*5);
    state |= mask;
    return state;
}
int increment(int state, int whichNumb, int howMuch)
{
    int current = getNumb(state, whichNumb);
    current += howMuch;
    return setNumb(state, whichNumb, current);
}
int decrement(int state, int whichNumb, int howMuch)
{
    int current = getNumb(state, whichNumb);
    current -= howMuch;
    return setNumb(state, whichNumb, current);
}
void DFS(int state)
{
    if(getNumb(state, 1) == 0)
    {
        Cs.insert(getNumb(state, 3));
    }
    for(int i = 1; i <= 3; ++i)
    {
        vector<int> others;
        for(int j = 1; j <= 3; ++j)
        {
            if(i == j)continue;
            others.push_back(j);
        }
        //Now pour from i to the other 2
        int toPour = min(bucketsCap[others[0]] - getNumb(state, others[0]), getNumb(state, i));
        int newState = increment(state, others[0], toPour);
        newState = decrement(newState, i, toPour);
        if(used[newState] == 0)
        {
            used[newState] = 1;
            DFS(newState);
        }
        toPour = min(bucketsCap[others[1]] - getNumb(state, others[1]), getNumb(state, i));
        newState = increment(state, others[1], toPour);
        newState = decrement(newState, i, toPour);
        if(used[newState] == 0)
        {
            used[newState] = 1;
            DFS(newState);
        }

    }
}
int main()
{
    fin >> A >> B >> C;
    bucketsCap[1] = A;
    bucketsCap[2] = B;
    bucketsCap[3] = C;
    int state = getState(0, 0, C);
    used[state] = 1;
    DFS(state);
    int currentNumber = 1;
    for(set<int>::iterator i = Cs.begin(); i != Cs.end(); ++i, ++currentNumber)
    {
        fout<<*i;
        if(currentNumber < Cs.size()) fout<<" ";
    }
    fout<<"\n";
    return 0;
}
