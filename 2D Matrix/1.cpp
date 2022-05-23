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

bool valid(ll i,ll j,ll n,ll m){
    if(i>=0 && i<n && j>=0 && j<m){
        return true;
    }
    return false;
}

void ZigZag(std::vector<std::vector<ll>> v, ll n, ll m){
    for(ll i=0;i<n;i++){
        cout<<v[i][0]<<" ";
        ll row = i-1;
        ll column = 1;

        while(valid(row,column,n,m)){
            cout<<v[row][column]<<" ";
            row--;
            column++;
        }
        cout<<endl;   
    }
    for(ll i=1;i<m;i++){
        cout<<v[n-1][i]<<" ";
        ll row = n-2;
        ll column = i+1;

        while(valid(row,column,n,m)){
            cout<<v[row][column]<<" ";
            row--;
            column++;
        }
        cout<<endl;   
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    vector<vector<ll>> v(n, vector<ll>(m, 0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    ZigZag(v, n, m);
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