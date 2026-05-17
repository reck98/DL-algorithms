#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int x = a[n - 1];
        int an = 0;
        int cnt_x = 0;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == x)
                cnt_x++;
            else
                cnt++;

            if (cnt_x == cnt)
            {
                an++;
                cnt_x *= 2;
                cnt = 0;
            }
        }

        if (cnt != 0)
            an++;

        cout << an << '\n';
    }
}