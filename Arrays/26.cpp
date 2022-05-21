#include<unordered_set>
#include<stack>
#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<cstring>
#include<numeric>
#include<algorithm>
#include<queue>
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
int rootN;

struct Query{
    ll idx, l, r;
};

Query q[N]; 

bool compare(Query q1,Query q2){
    if(q1.l/rootN == q2.l/rootN){
        return q1.r > q2.r;
    }
    return q1.l/rootN < q2.l/rootN;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        cin>>v[i];   
    }
    rootN = sqrtl(n);
    ll queries;
    cin>>queries;
    for(ll i=0;i<queries;i++){
        ll l,r;
        cin>>l>>r;
        q[i].l = l;
        q[i].r = r;
        q[i].idx = i;
    }
    std::sort(q,q+queries,compare);
    std::vector<ll> ans(queries);
    ll curr_l = 0, curr_r = -1, l, r;
    ll curr_ans = 0;
    for(ll i=0;i<queries;i++){
        l = q[i].l;r = q[i].r;
        l--;r--;
        while(curr_r < r){
            curr_r++;
            curr_ans += v[curr_r];
        }
        while(curr_l > l){
            curr_l--;
            curr_ans += v[curr_l];
        }
        while(curr_l < l){
            curr_ans -= v[curr_l];
            curr_l++;
        }
        while(curr_r > r){
            curr_ans -= v[curr_r];
            curr_r--;
        }
        ans[q[i].idx] = curr_ans;
    }

    for(ll i=0;i<queries;i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}