/*
ID: 286002
PROG: transform
LANG: C++11
*/
#include <fstream>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
ofstream fout ("transform.out");
ifstream fin ("transform.in");
struct board
{
    vector<vector<int>> representation;
};
typedef struct board board;
int N;
board start, transformed;
bool boardsAreEqual(board &A, board &B)
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            if(A.representation[i][j] != B.representation[i][j]) return false;
        }
    }
    return true;
}
bool is90deg(board A, board B)
{
    int upperLimit = N-1;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            if(A.representation[i][j] != B.representation[j][upperLimit - i]) return false;
        }
    }
    return true;
}
bool is180deg(board A, board B)
{
    int upperLimit = N-1;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            if(A.representation[i][j] != B.representation[upperLimit-i][upperLimit - j]) return false;
        }
    }
    return true;
}
bool is270deg(board A, board B)
{
    int upperLimit = N-1;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            if(A.representation[i][j] != B.representation[upperLimit - j][i]) return false;
        }
    }
    return true;
}
bool isReflection(board A, board B)
{
    int upperLimit = N-1;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            if(A.representation[i][j] != B.representation[i][upperLimit - j]) return false;
        }
    }
    return true;
}
board reflect(board B)
{
    int uppperLimit = N-1;
    vector<vector<int>> generated;
    generated.resize(N);
    for(int i = 0; i < N; ++i)
    {
        generated[i].resize(N);
    }
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            generated[i][j] = B.representation[i][uppperLimit - j];
        }
    }
    board a;
    a.representation = generated;
    return a;
}

int main()
{
    fin >> N;
    vector<vector<int>>rep;
    rep.resize(N);
    for(int i = 0; i < N; ++i)
    {
        rep[i].resize(N);
    }
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            char current;
            fin >> current;
            rep[i][j] = current;
        }
    }
    start.representation = rep;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            char current;
            fin >> current;
            rep[i][j] = current;
        }
    }
    int result = 0;
    transformed.representation = rep;
    if(is90deg(start, transformed)) result = 1;
    else if(is180deg(start, transformed)) result = 2;
    else if(is270deg(start, transformed)) result = 3;
    else if(isReflection(start, transformed)) result = 4;
    else if(is90deg(reflect(start), transformed) || is180deg(reflect(start), transformed) || is270deg(reflect(start), transformed)) result = 5;
    else if(boardsAreEqual(start, transformed)) result = 6;
    else result = 7;
    fout << result << "\n";
    cout << result << "\n";
    return 0;
}
