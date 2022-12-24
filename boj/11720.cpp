#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdlib>

#define endl "\n"

using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        sum += str[i] - '0';
    }
    cout << sum;
    return 0;
}