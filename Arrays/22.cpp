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

ll mycomparison(ll X, ll Y)
{
    // ll rX=0,rY=0;
    // while(x){
    //     rX = rX*10 + x%10;
    //     x /= 10;
    // }
    // while(y){
    //     rY = rY*10 + y%10;
    //     y /= 10;
    // }
    // ll X = x;
    // ll Y = y;
    // while(rX){
    //     X = X*10 + rX%10;
    //     rX /= 10;
    // }
    // while (rY){
    //     Y = Y*10 + rY%10;
    //     rY /= 10;
    // }
    // return X > Y ? 1 : 0;
    ll XY = X, YX = Y, revX = 0, revY = 0;

    // reverse X and assign to revX
    while (X)
    {
        revX = revX * 10 + X % 10;
        X /= 10;
    }

    // reverse Y and assign to revY
    while (Y)
    {
        revY = revY * 10 + Y % 10;
        Y /= 10;
    }

    // first append Y at the end of X
    while (revY)
    {
        XY = XY * 10 + revY % 10;
        revY /= 10;
    }

    // then append X at the end of Y
    while (revX)
    {
        YX = YX * 10 + revX % 10;
        revX /= 10;
    }

    // Now see which of the two
    // formed numbers is greater
    return XY > YX;
}

void CreateBiggestNumber(std::vector<ll> v, ll n)
{
    std::sort(v.begin(), v.end(), mycomparison);
    print(v, n);
    return;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    CreateBiggestNumber(v, n);
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