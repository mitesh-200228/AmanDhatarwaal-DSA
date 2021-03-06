#include<unordered_set>
#include<stack>
#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<cstring>
#include<algorithm>
#include<queue>
#include<stdio.h>
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
 
bool solve(){
    string s;
    getline(cin, s);
    // cout<<s<<endl;
    ll n = s.length();
    string ans = "";
    for(char i:s){
        if((i>='a' && i<='z') || (i>='0' && i<='9')){
            ans += i;
        }
        if(i>='A' && i<='Z'){
            ans += tolower(i);
        }
    }
    // cout<<ans<<"--"<<s<<endl;
    for(ll i=0;i<ans.length()/2;i++){
        if(s[i]!=s[ans.length()-i-1]){
            return false;
        }
    }
    return true;
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
        bool ans = solve();
        cout<<ans<<endl;
    }
    return 0;
}