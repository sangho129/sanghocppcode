#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

int N, U[1000000];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> U[i];
    }
    sort(U, U + N);
    cout << U[0] << " " << U[N - 1] << "\n";
    return 0;
}