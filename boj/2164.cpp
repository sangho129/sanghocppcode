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
int N, tmp;

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    while (1)
    {
        if (q.size() == 1)
        {
            cout << q.back() << endl;
            return 0;
        }
        q.pop();
        tmp = q.front();
        q.pop();
        q.push(tmp);
    }
}