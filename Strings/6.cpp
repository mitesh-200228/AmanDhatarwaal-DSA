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
 
void Sequence(string s){
    std::unordered_map<char,string> ump;
    ump['A'] = "2";
    ump['B'] = "22";
    ump['C'] = "222";
    ump['D'] = "3";
    ump['E'] = "33";
    ump['F'] = "333";
    ump['G'] = "4";
    ump['H'] = "44";
    ump['I'] = "444";
    ump['J'] = "5";
    ump['K'] = "55";
    ump['L'] = "555";
    ump['M'] = "6";
    ump['N'] = "66";
    ump['O'] = "666";
    ump['P'] = "7";
    ump['Q'] = "77";
    ump['R'] = "777";
    ump['S'] = "7777";
    ump['T'] = "8";
    ump['U'] = "88";
    ump['V'] = "888";
    ump['W'] = "9";
    ump['X'] = "99";
    ump['Y'] = "999";
    ump['Z'] = "9999";
    for(ll i=0;i<s.length();i++){
        cout<<ump[s[i]];
    }cout<<endl;
}

void solve(){
    string s;cin>>s;
    Sequence(s);
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