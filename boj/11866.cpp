#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

queue<int> q;
int N, K, tmp;

int main()
{
    cin >> N >> K;
    cout << '<';
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < K; j++)
        {
            tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        tmp = q.front();
        if (i != N - 1)
            cout << tmp << ", ";
        else
            cout << tmp;
        q.pop();
    }
    cout << '>';
    return 0;
}