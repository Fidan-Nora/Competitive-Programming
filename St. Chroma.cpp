Problem : https://codeforces.com/contest/2106/problem/B

/**
   - author : Nora
   - created : 25.3.25 1:4:53 pm.
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
    ll n,x;
    cin>>n>>x;
    if (n == x){
        x--;
    }
    for (ll i=0; i<=x-1; i++){
        cout<<i<<" ";
    }
    for (ll i=x+1; i<n; i++){
        cout<<i<<" ";
    }
    cout<<x;
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
