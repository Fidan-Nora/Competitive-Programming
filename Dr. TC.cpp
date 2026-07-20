Problem : https://codeforces.com/contest/2106/problem/A

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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt1=0, cnt0=0;
    for (char c : s){
        if (c == '1') cnt1++;
        else cnt0++;
    }
    ll temp=cnt1*n;
    cout<<temp-cnt1+cnt0;
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
