#include <unordered_set>
#include <stack>
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <cstring>
#include <algorithm>
#include <queue>
#include <stdio.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <climits>
#include <cmath>
#include <math.h>
#include <limits>
#define ll long long int
const ll N = 1e5 + 2, MOD = 1e9 + 7;
using namespace std;
int power(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b % 2)
        {
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    }
    return ans;
}
ll countSetBits(ll n)
{
    ll count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

ll gcd(ll a, string b)
{
    ll res = 0;
    for (int i = 0; i < b.length(); i++)
    {
        res = ((res * 10) + (b[i] - '0')) % a;
    }
    return __gcd(a, res);
}

void print(vector<ll> v, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}

std::vector<std::vector<ll>> a3Sum(std::vector<ll> v, ll n, ll key)
{
    if (n < 3)
        return {};
    std::vector<std::vector<ll>> res;
    sort(v.begin(), v.end());
    vector<ll> okm;
    for (ll i = 0; i < n - 2; ++i)
    {
        if (i == 0 || v[i] != v[i - 1])
        {
            ll j = i + 1;
            ll k = n - 1;
            while (j < k)
            {
                ll sum = v[i] + v[j] + v[k];
                if (sum == key)
                {
                    okm.push_back(v[i]);
                    okm.push_back(v[j]);
                    okm.push_back(v[k]);
                    res.push_back(okm);
                    okm.clear();
                    while (j < k && v[j] == v[j + 1])
                        ++j;
                    while (j < k && v[k] == v[k - 1])
                        --k;
                    ++j;
                    --k;
                }
                else if (sum < 0)
                    ++j;
                else
                    --k;
            }
        }
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    ll key;
    cin >> key;
    std::vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    std::vector<std::vector<ll>> ans = a3Sum(v, n, key);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}