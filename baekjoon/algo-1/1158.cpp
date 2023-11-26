#include <iostream>
#include <queue>

using namespace std;

void Jose(queue<int> &q, int k)
{
    cout << "<";
    int cnt = 0;
    while (!q.empty())
    {
        int num = q.front();
        q.pop();
        cnt++;
        if (cnt == k)
        {
            cnt = 0;
            cout << num;
            if (!q.empty())
            {
                cout << ", ";
            }
        }
        else
        {
            q.push(num);
        }
    }
    cout << ">";
}

int main()
{
    int i, n, k;
    queue<int> q;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
    {
        q.push(i);
    }
    Jose(q, k);
    return 0;
}