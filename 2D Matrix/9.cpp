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
 
void solve(){
    ll n;cin>>n;
    ll m;cin>>m;
    std::vector<std::vector<ll>> v(n,std::vector<ll> (m,-1));
    ll k = 0;
    ll a = n,b = m;
    ll l = 0;
    char x = 1;
    while(k<n && l<m){
        for(ll i=l;i<m;i++){
            v[k][i] = x;
        }
        k++;
        for(ll i=k;i<n;i++){
            v[i][m-1] = x;
        }   
        m--;
        if(k<n){
            for(ll i=m-1;i>=l;i--){
                v[n-1][i] = x;
            }
            n--;
        }
        if(l<m){
            for(ll i=n-1;i>=k;i--){
                v[i][l] = x;
            }
            l++;
        }
        x = (x == 0)? 1: 0;
    }
    for(ll i=0;i<a;i++){
        for(ll j=0;j<b;j++){
            cout<<v[i][j]<<" ";   
        }   cout<<endl;
    }

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