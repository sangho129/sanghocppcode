#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        stack<char> s;
        string tmp;
        cin >> tmp;
        bool yourmom = true;
        for (int i = 0; i < tmp.length(); i++)
        {
            if (tmp[i] == '(')
                s.push(tmp[i]);
            if (tmp[i] == ')')
            {
                if (s.size() == 0)
                {
                    yourmom = false;
                    continue;
                }
                else
                    s.pop();
            }
        }
        if (!yourmom || !s.empty())
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}