Problem : https://codeforces.com/contest/2200/problem/C

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
    ll n;
    string s;
    cin>>n>>s;
    for (int i=0; i<n/2; i++){
        for (int j=0; j<n-1; j++){
            if (s[j] == s[j+1]){
                s.erase(j, 2);
            }
        }
    }
    cout<<(s.empty() ? "YES" : "NO");
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
