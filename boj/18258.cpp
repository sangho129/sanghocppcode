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
int N, num;
string cmd;
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            cin >> num;
            q.push(num);
        }
        else if (cmd == "pop")
        {
            if (q.size() == 0)
                cout << -1 << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (cmd == "size")
            cout << q.size() << endl;
        else if (cmd == "empty")
        {
            if (q.size() == 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if (cmd == "front")
        {
            if (q.size() == 0)
                cout << -1 << endl;
            else
                cout << q.front() << endl;
        }
        else if (cmd == "back")
        {
            if (q.size() == 0)
                cout << -1 << endl;
            else
                cout << q.back() << endl;
        }
    }
    return 0;
}