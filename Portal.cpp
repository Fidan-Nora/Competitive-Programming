Problem : https://codeforces.com/contest/2200/problem/D
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define ld long double
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

void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<ll> ed, cen;
    for (int i=0; i<x; i++){
        ed.pb(v[i]);
    }
    for (int i=y; i<n; i++){
        ed.pb(v[i]);
    }
    for (int i=x; i<y; i++){
        cen.pb(v[i]);
    }
    int mn=min_element(all(cen))-cen.begin();
    vector<ll> nwc;
    for (int i=mn; i<cen.size(); i++){
        nwc.pb(cen[i]);
    }
    for (int i=0; i<mn; i++){
        nwc.pb(cen[i]);
    }
    int j=0;
    while (j<ed.size()){
        if (ed[j] > nwc[0]) break;
        cout<<ed[j]<<" ";
        j++;
    }
    for (int i : nwc){
        cout<<i<<" ";
    }
    while (j<ed.size()){
        cout<<ed[j]<<" ";
        j++;
    }
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
