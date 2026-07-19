Problem : https://codeforces.com/contest/2200/problem/A

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
    int n;
    cin>>n;
    map<int,int>mp;
    int mx=-1;
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
        mx=max(mx, x);
    }
    if (n == 1){
        cout<<1;
        return;
    }
    cout<<mp[mx];
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
