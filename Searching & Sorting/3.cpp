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
 
void common(std::vector<ll> v1,std::vector<ll> v2,std::vector<ll> v3,ll n,ll m,ll k){
    ll i = 0;
    ll j = 0;
    ll p = 0;
    while(i<n && j<m && p<k){
        if(v1[i] == v2[j] && v2[j] == v3[p] && v3[p] == v1[i]){
            cout<<v1[i]<<endl;
            i++;
            j++;
            p++;
        }
        else if(v1[i] < v2[j]){
            i++;
        }else if(v2[j] < v3[p]){
            j++;
        }else{
            p++;
        }
    }
}

void solve(){
    ll n;cin>>n;
    ll m;cin>>m;
    ll k;cin>>k;
    vector<ll> v1(n);
    vector<ll> v2(m);
    vector<ll> v3(k);
    for(ll i=0;i<n;i++){
        cin>>v1[i];
    }
    for(ll i=0;i<m;i++){
        cin>>v2[i];   
    }
    for(ll i=0;i<k;i++){
        cin>>v3[i];
    }
    common(v1,v2,v3,n,m,k);
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