Problem : https://codeforces.com/contest/2057/problem/B

/**
   - author : Nora
   - created : 17.4.25 6:8:0 pm.
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define bye return 0
#define pb push_back
#define pfr pop_front
#define pbc pop_back
#define pll pair<ll, ll>
#define ff first
#define ss second
#define NO cout<<"NO"
#define YES cout<<"YES"
#define all(v) v.begin(), v.end()

const ll N = 200007;
const ll mod = 1000000007;
const ll MAX=1e18;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    map<ll,ll> mp;
    for (ll i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    if (k == 0){
        cout<<mp.size();
        return;
    }
    vector<pll> res;
    for (auto [x,y] : mp){
        res.pb({y,x});
    }
    sort(all(res));
    for (auto &[y,x] : res){
        if (k-y < 0){
            break;
        }
        k-=y;
        y=0;
    }
    ll resn=0;
    for (auto [y,x] : res){
        if (y != 0) resn++;
    }
    if (resn == 0) cout<<1;
    else cout<<resn;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll testcases=1;
    cin>>testcases;
    while (testcases--) {
        solve();
        cout<<endl;
    }
}
