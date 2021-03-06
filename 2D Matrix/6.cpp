#include<unordered_set>
#include<stack>
#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<cstring>
#include<algorithm>
#include<queue>
#include <stdio.h>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
#include<climits>
#include<cmath>
#include<math.h>
#include<limits>
#define ll long long int
const ll N = 1e5+ 2,MOD = 1e9+7;
using namespace std;
int power(ll a,ll b) {
    ll ans = 1;
    while(b>0){
        if(b%2){
            ans=ans*a;
        }
        a=a*a;b>>=1;
    }
    return ans;
}
ll countSetBits(ll n) {
    ll count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
 
ll gcd(ll a, string b){
    ll res = 0;
    for (int i = 0; i < b.length(); i++){
        res = ((res * 10) + (b[i] - '0')) % a;
    }
    return __gcd(a,res);
}
 
void print(vector<ll> v,ll n){
    for(ll i=0;i<n;i++){
        cout<<v[i]<<' ';
    }cout<<endl;
}

bool isSafe(ll i,ll j,ll n,ll m,vector<vector<ll>> v,vector<vector<ll>> visited){
    if(i<n && i>=0 && j<m && j>=0 && v[i][j] && !visited[i][j]){
        return true;
    }
    return false;
}

void NumberOFIlands(vector<vector<ll>> v,ll row,ll col,vector<vector<ll>> &visited,ll n,ll m){
    ll rows[] = {-1,-1,-1,0,1,1,1,0};
    ll cols[] = {-1,0,1,1,1,0,-1,-1};
    visited[row][col] = 1;
    ll k = 8;
    for(ll i=0;i<k;i++){
        if(isSafe(row+rows[i],col+cols[i],n,m,v,visited)){
            NumberOFIlands(v,row+rows[i],col+cols[i],visited,n,m);
        }
    }
}

void solve(){
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    vector<vector<ll>> v(n, vector<ll>(m, 0));
    vector<vector<ll>> visited(n,vector<ll> (m,0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    ll cnt = 0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(v[i][j] && !visited[i][j]){
                NumberOFIlands(v,i,j,visited,n,m);
                cnt++;
            }   
        }   
    }
    cout<<cnt<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}