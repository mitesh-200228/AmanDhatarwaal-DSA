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
 
void print(std::vector<ll> v,ll n){
    for(ll i=0;i<n;i++){
        cout<<v[i]<<' ';
    }cout<<endl;
}

void SetMAtrixZeros(std::vector<std::vector<ll>> v,ll n,ll m){
    std::unordered_map<ll,ll> ump1;
    std::unordered_map<ll,ll> ump2;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(!v[i][j]){
                ump1[i]++;
                ump2[j]++;
            }   
        }   
    }

    for(auto it:ump1){
        if(it.second > 0){
            for(ll i=0;i<n;i++){
                v[it.first][i] = 0;
            }
        }
    }

    for(auto it:ump2){
        if(it.second > 0){
            for(ll i=0;i<m;i++){
                v[i][it.first] = 0;
            }
        }
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cout<<v[i][j]<<" ";   
        }   cout<<endl;
    }
}

void solve(){
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    std::vector<std::vector<ll>> v(n, std::vector<ll>(m, 0));
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    SetMAtrixZeros(v,n,m);
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