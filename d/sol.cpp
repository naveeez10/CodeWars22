#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    int last = 31;
    while (last > 0)
    {
        for (int i = 0; i < 31; ++i)
        {
            int x = n | ((1 << i) - 1);
            if (x > m)
            {
                ans |= (1 << i) / 2;
                n |= (1 << i) / 2;
                last = i;
                break;
            }
        }
    }
    cout << ans << "\n";
}
int main()
{
    freopen("tc5.txt", "r", stdin);
    freopen("ans5.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}