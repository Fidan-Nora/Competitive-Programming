Problem : https://codeforces.com/contest/1108/problem/B

/**
   - author : Nora
   - created : 14.4.25 9:4:25 pm.
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
#define No cout<<"No"
#define Yes cout<<"Yes"
#define all(v) v.begin(), v.end()

const ll N = 200007;
const ll mod = 1000000007;
const ll MAX=1e18;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for (ll i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<ll> res;
    ll mx=-1;
    for (auto [x,y] : mp){
        mx=max(mx, x);
        if (y == 1) res.pb(x);
    }
    //for (ll i : res) cout<<i<<" ";
    ll y=mx, x=0;
    for (ll i : res){
        if (y%i != 0){
            x=i;
            break;
        }
    }
    if (mp[y] == 2) cout<<y<<" "<<y;
    else cout<<x<<" "<<y;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll testcases=1;
    //cin>>testcases;
    while (testcases--) {
        solve();
        cout<<endl;
    }
}
