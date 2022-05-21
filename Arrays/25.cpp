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
 
void finalSolve(vector<ll> v,vector<ll> vtr,ll r,ll n,ll i,ll j){
    if(j == r){
        for(ll ix=0;ix<r;ix++){
            cout<<vtr[ix]<<" ";
        }cout<<endl;
        return;
    }
    if(i>n-1){
        return;
    }
    vtr[j] = v[i];
    finalSolve(v,vtr,r,n,i+1,j+1);
    finalSolve(v,vtr,r,n,i+1,j);
}

void SolveIt(vector<ll> v,ll r,ll n){
    vector<ll> vtr(n);
    finalSolve(v,vtr,r,n,0,0);
}

void solve(){
    ll n;cin>>n;
    ll r;cin>>r;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    SolveIt(v,r,n);
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