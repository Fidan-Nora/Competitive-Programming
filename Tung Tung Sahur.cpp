Problem : https://codeforces.com/contest/2094/problem/D

/**
   - author : Nora
   - created : 13.4.25 8:38:0 pm.
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
    string p,s;
    cin>>p>>s;
    ll i=0, j=0;
    bool ok=1;
    while (i < p.size() && j < s.size()){
        if (p[i] != s[j]){
            ok=0;
            break;
        }
        j++;
        if (j < s.size() && s[j] == s[j - 1]) j++;
            i++;
        }
    if (i != p.size() || j != s.size()) ok=0;
    cout<<(ok ? "YES" : "NO");
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
