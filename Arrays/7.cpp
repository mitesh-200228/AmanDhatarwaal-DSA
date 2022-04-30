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
 
ll Finddip(vector<ll> v,ll n){
    ll ans = 0;
    for(ll i=0;i<n-2;i++){
        if((v[i] < v[i+1] && v[i+1] > v[i+2]) || (v[i] > v[i+1] && v[i+1] < v[i+2])){
            ans = i+1;
        }
    }   
    return ans;
}

void reverse(vector<ll> v,ll n){
    for(ll i=0;i<n;i++){
        cout<<v[n-i-1]<<" ";
    }cout<<endl;
}

void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll x = 1;
    ll ans = Finddip(v,n);
    if(!ans){
        if(v[0]<=v[n-1]){
            swap(v[n-1],v[n-2]);
            print(v,n);
            return;
        }else{
            reverse(v,n);
            return;
        }
    }
    for(ll i=ans;i<n-1;i++){
        if(v[i] < v[i+1]){
            x = 0;
        }
    }
    if(!x) swap(v[n-1],v[n-2]);
    else {
        swap(v[ans],v[ans-1]);
        sort(v.begin()+ans,v.end());
    }
    print(v,n);
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