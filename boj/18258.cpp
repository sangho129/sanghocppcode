#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
int N, num;
string cmd;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
                cout << -1 << "\n";
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (cmd == "size")
            cout << q.size() << "\n";
        else if (cmd == "empty")
        {
            if (q.size() == 0)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (cmd == "front")
        {
            if (q.size() == 0)
                cout << -1 << "\n";
            else
                cout << q.front() << "\n";
        }
        else if (cmd == "back")
        {
            if (q.size() == 0)
                cout << -1 << "\n";
            else
                cout << q.back() << "\n";
        }
    }
    return 0;
}